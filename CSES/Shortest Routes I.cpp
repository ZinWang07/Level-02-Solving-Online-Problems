#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
using namespace std;
const int N = 1e5+7;
const ll INF = 4e18;
int n,m;
vector<vector<pll>> adj(N);
vector<ll> dist(N,INF);

void dijkstra()
{
    priority_queue<pll,vector<pll>,greater<pll>> pq;
    dist[1] = 0; pq.push({0,1});

    while(!pq.empty())
    {
        auto [d,u] = pq.top(); pq.pop();
        if(d != dist[u]) continue;

        for(auto [v,w]: adj[u])
            if(dist[u] + w < dist[v])
            {
                dist[v] = dist[u]+w;
                pq.push({dist[v],v});
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for(int i = 1; i <= m; i++)
    {
        int a,b; ll c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }

    dijkstra();
    for(int i = 1; i <= n; i++) cout<<dist[i]<<" ";
    return 0;
}
