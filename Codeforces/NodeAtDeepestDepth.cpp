#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
vector<vector<int>> adj(N);
int dp[N] = {0};
int height[N] = {0};

bool isleaf(int u, int p) //haÌm kiêÒm tra coì phaÒi laì
{
    if(p==0 && adj[u].empty()) return true;
    return (adj[u].size()==1 && p!=0);
}

void DFS(int u, int p)
{
    int best = 0; //biêìn taòm ðo ðôò sâu xa nhâìt cuÒa nuìt u
    for(int v: adj[u])
    {
        if(v == p) continue;
        DFS(v,u);
        int level = 1 + height[v]; //týÌ u xuôìng v qua bao nhiêu caònh
        if(level>best) //nêìu ðôò sâu v > u thiÌ câòp nhâòt laòi
        {
            best = level;
            dp[u] = dp[v];
        }
        else if(level==best) dp[u] += dp[v]; //bãÌng ðôò sâu thiÌ côòng sôì nuìt
        else continue; //coì thêÒ ko viêìt cuÞng ðýõòc
    }

    height[u] = best; //ðôò sâu xa nhâìt cuÒa u
    if(isleaf(u,p)) //nêìu laÌ laì
    {
        height[u] = 0; //baÒn thân nuìt laì ko thêÒ ði ðâu xa hõn nên = 0
        dp[u] = 1; //= 1 do chiÒ coì baÒn thân noì
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

