#include <bits/stdc++.h>
#define ull unsigned long long
#define puu pair<ull,ull>
using namespace std;

const int N = 1005;
ull D1[N][N];
ull D2[N][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,p; cin>>n>>m>>p;

    mt19937_64 rng(1337);
    vector<ull> H1(m+1), H2(m+1);
    for(int c = 1; c <= m; c++)
    {
        H1[c] = rng();
        H2[c] = rng();
    }

    for(int k = 0; k < p; k++)
    {
        int i,j,x,y,c; cin>>i>>j>>x>>y>>c;
        ull v1 = H1[c], v2 = H2[c];

        D1[i][j] += v1;
        D1[x+1][j] -= v1;
        D1[i][y+1] -= v1;
        D1[x+1][y+1] += v1;

        D2[i][j] += v2;
        D2[x+1][j] -= v2;
        D2[i][y+1] -= v2;
        D2[x+1][y+1] += v2;
    }

    vector<puu> all_hashes; all_hashes.reserve(n*n);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            D1[i][j] += D1[i-1][j] + D1[i][j-1] - D1[i-1][j-1];
            D2[i][j] += D2[i-1][j] + D2[i][j-1] - D2[i-1][j-1];

            all_hashes.push_back({D1[i][j],D2[i][j]});
        }

    sort(all_hashes.begin(),all_hashes.end());

    vector<pair<puu,int>> compressed;
    compressed.reserve(all_hashes.size());

    for(size_t i = 0; i < all_hashes.size(); )
    {
        size_t j = i;
        while(j < all_hashes.size() && all_hashes[j]==all_hashes[i]) j++;

        compressed.push_back({all_hashes[i], (int)(j-i)});
        i = j;
    }

    int q; cin>>q;
    while(q--)
    {
        int u,v; cin>>u>>v;
        puu target = {D1[u][v],D2[u][v]};

        auto it = lower_bound(compressed.begin(), compressed.end(), make_pair(target, 0),
            [](const pair<puu, int>& a, const pair<puu, int>& b) {
                return a.first < b.first;
            });
        cout<<it->second<<'\n';
    }
    return 0;
}
