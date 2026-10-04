#include <bits/stdc++.h>
using namespace std;

struct Query {
    int l, r;
};

static inline int ctzll(unsigned long long x) {
    return __builtin_ctzll(x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m = 2 * n;
        vector<int> a(m);
        for (int i = 0; i < m; ++i) cin >> a[i];

        // positions of each value
        vector<array<int, 2>> pos(n);
        vector<int> seen(n, 0);
        for (int i = 0; i < m; ++i) {
            int x = a[i];
            pos[x][seen[x]++] = i;
        }

        vector<int> d1(m), d2(m);

        for (int i = 0, l = 0, r = -1; i < m; ++i) {
            int k = 1;
            if (i <= r) k = min(d1[l + r - i], r - i + 1);
            while (i - k >= 0 && i + k < m && a[i - k] == a[i + k]) ++k;
            d1[i] = k;
            if (i + k - 1 > r) {
                l = i - k + 1;
                r = i + k - 1;
            }
        }

        for (int i = 0, l = 0, r = -1; i < m; ++i) {
            int k = 0;
            if (i <= r) k = min(d2[l + r - i + 1], r - i + 1);
            while (i - k - 1 >= 0 && i + k < m && a[i - k - 1] == a[i + k]) ++k;
            d2[i] = k;
            if (i + k - 1 > r) {
                l = i - k;
                r = i + k - 1;
            }
        }

        vector<Query> qs;
        qs.reserve(2 * m);

        for (int i = 0; i < m; ++i) {
            // odd center
            int rad = d1[i];
            qs.push_back({i - rad + 1, i + rad - 1});

            // even center
            rad = d2[i];
            if (rad > 0) {
                qs.push_back({i - rad, i + rad - 1});
            }
        }

        // Mo's ordering
        int block = max(1, (int)sqrt(m));
        sort(qs.begin(), qs.end(), [&](const Query& A, const Query& B) {
            int ba = A.l / block;
            int bb = B.l / block;
            if (ba != bb) return ba < bb;
            if (ba & 1) return A.r > B.r;
            return A.r < B.r;
        });

        // count of each value inside current interval
        vector<int> cnt(n, 0);

        // absent-bitset: 1 means "currently absent"
        int W = (n + 63) >> 6;
        vector<unsigned long long> absent(W, ~0ULL);
        if (n % 64) {
            absent[W - 1] = (1ULL << (n % 64)) - 1ULL;
        }

        int SW = (W + 63) >> 6;
        vector<unsigned long long> top(SW, 0ULL);
        for (int wi = 0; wi < W; ++wi) {
            if (absent[wi]) top[wi >> 6] |= (1ULL << (wi & 63));
        }

        auto setAbsent = [&](int x) {
            int wi = x >> 6, bi = x & 63;
            unsigned long long bit = 1ULL << bi;
            if ((absent[wi] & bit) == 0) {
                absent[wi] |= bit;
                top[wi >> 6] |= (1ULL << (wi & 63));
            }
        };

        auto clearAbsent = [&](int x) {
            int wi = x >> 6, bi = x & 63;
            unsigned long long bit = 1ULL << bi;
if (absent[wi] & bit) {
                absent[wi] &= ~bit;
                if (absent[wi] == 0ULL) {
                    top[wi >> 6] &= ~(1ULL << (wi & 63));
                }
            }
        };

        auto addPos = [&](int idx) {
            int x = a[idx];
            ++cnt[x];
            if (cnt[x] == 1) clearAbsent(x);
        };

        auto removePos = [&](int idx) {
            int x = a[idx];
            --cnt[x];
            if (cnt[x] == 0) setAbsent(x);
        };

        auto getMex = [&]() -> int {
            for (int ti = 0; ti < SW; ++ti) {
                if (top[ti]) {
                    int wi = ti * 64 + ctzll(top[ti]);
                    return wi * 64 + ctzll(absent[wi]);
                }
            }
            return n;
        };

        int curL = 0, curR = -1;
        int ans = 0;

        for (const auto& q : qs) {
            while (curL > q.l) addPos(--curL);
            while (curR < q.r) addPos(++curR);
            while (curL < q.l) removePos(curL++);
            while (curR > q.r) removePos(curR--);

            ans = max(ans, getMex());
        }

        cout << ans << '\n';
    }

    return 0;
}
