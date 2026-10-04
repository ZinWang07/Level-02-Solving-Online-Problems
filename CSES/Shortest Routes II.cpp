#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
using namespace std;
const int N = 509;
const ll INF = 1e18;
int n,m,q;
ll dist[N][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m>>q;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) dist[i][j] = INF;
        dist[i][i] = 0;
    }

    for(int i = 1; i <= m; i++)
    {
        int a,b; ll c; cin>>a>>b>>c;
        dist[a][b] = min(dist[a][b],c);
        dist[b][a] = min(dist[b][a],c);
    }

    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
            }

    while(q--)
    {
        int u,v; cin>>u>>v;
        if(dist[u][v] == INF) cout<<"-1\n";
        else cout<<dist[u][v]<<"\n";
    }
    return 0;
}

