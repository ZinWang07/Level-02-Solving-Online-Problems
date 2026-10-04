#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
vector<vector<int>> adj(N);
vector<int> parent(N), depth(N);
int subtree[N] = {0};
int height[N] = {0};
int leafCount[N] = {0};

void DFS(int u, int p, int d)
{
    parent[u] = p;
    depth[u] = d;
    subtree[u]++;
    int childCnt = 0;

    for(int v : adj[u])
    {
        if(v == p) continue;
        childCnt++;
        DFS(v,u,d+1);
        subtree[u] += subtree[v];
        height[u] = max(height[u],1 + height[v]);
        leafCount[u]+= leafCount[v];
    }

    if(childCnt==0) leafCount[u]=1;
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
    DFS(1,0,0);

    cout<<"\nParent:\n";
    for(int i = 1; i <= n; i++)
        cout<<i<< " -> " <<parent[i]<<'\n';

    cout<<"\nDepth:\n";
    for(int i = 1; i <= n; i++)
        cout<<i<< " -> " <<depth[i]<<'\n';

    cout<<"\nSubtree:\n";
    for(int i = 1; i <= n; i++)
        cout<<i<< " -> " <<subtree[i]<<'\n';

    cout<<"\nHeight:\n";
    for(int i = 1; i <= n; i++)
        cout<<i<< " -> " <<height[i]<<'\n';

    cout<<"\nLeafCount:\n";
    for(int i = 1; i <= n; i++)
        cout<<i<< " -> " <<leafCount[i]<<'\n';
    return 0;
}
