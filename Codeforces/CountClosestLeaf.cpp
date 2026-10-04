#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
const int M = 1e9;
vector<vector<int>> adj(N);
int dp[N] = {0};

void DFS(int u, int p)
{
    bool isleaf = true;
    dp[u] = M;

    for(int v: adj[u])
    {
        if(v == p) continue;
        isleaf = false;
        DFS(v,u);
        dp[u] = min(dp[u],1 + dp[v]);
    }

    if(isleaf) dp[u] = 0;
}

int main()
{
    int n,u,v; cin>>n;
    for(int i = 0; i < n-1; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1,0);

    for(int i = 1; i <= n; i++) cout<<dp[i]<<" ";
    return 0;
}
