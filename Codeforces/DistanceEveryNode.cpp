#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
vector<vector<int>> adj(N);
int dp[N] = {0};
int subtree[N] = {0};

void DFS(int u, int p)
{
    subtree[u]++;
    for(int v: adj[u])
    {
        if(v == p) continue;
        DFS(v,u);
        subtree[u] += subtree[v];
        dp[u] += dp[v] + subtree[v];
    }
}

int main()
{
    int n,u,v; cin>>n;
    for(int i = 0; i < n-1; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1,0);

    for(int i = 1; i <= n; i++) cout<<dp[i]<<" ";
    return 0;
}
