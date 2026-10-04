#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll total = 1LL * n * (n + 1) / 2;

    // Tổng lẻ -> không thể chia thành hai tập bằng nhau
    if (total % 2) {
        cout << 0 << '\n';
        return 0;
    }

    int target = total / 2;

    vector<ll> dp(target + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int sum = target; sum >= i; sum--) {
            dp[sum] += dp[sum - i];
            dp[sum] %= MOD;
        }
    }

    // Mỗi cách chia bị đếm 2 lần
    const ll INV2 = (MOD + 1) / 2;

    cout << dp[target] * INV2 % MOD << '\n';
}
