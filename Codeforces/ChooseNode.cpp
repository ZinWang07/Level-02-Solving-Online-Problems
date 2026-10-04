#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
vector<vector<int>> adj(N);
vector<int> nodes;
int value[N] = {0};
int dp[N][2];

void DFS(int u, int p) //Tiình toaìn caìc thýì
{
    dp[u][1] = value[u]; //Xeìt u trong 2 trýõÌng hõòp: Lâìy u
    dp[u][0] = 0; //vaÌ ko lâìy u
    for(int v: adj[u])
    {
        if(v == p) continue;
        DFS(v,u);
        dp[u][1] += dp[v][0]; //lâìy u thiÌ ko lâìy v
        dp[u][0] += max(dp[v][0],dp[v][1]); //ngýõòc laòi tiình xem coì hoãòc ko lâìy v seÞ nhiêÌu hõn
    }
}

void trace(int u, int p, bool select_parent)
{
    bool select_u; //xeìt coì choòn u hay ko

    if(select_parent) select_u=false; //nêìu ðaÞ choòn cha thiÌ ko choòn u
    else if(dp[u][1]>dp[u][0]) select_u=true; //ngýõòc laòi xeìt lâìy u hoãòc ko lâìy u seÞ nhiêÌu hõn
    else select_u = false; //rôÒ hýìng ðêÒ select u coì nghiÞa

    if(select_u) nodes.push_back(u);

    for(int v: adj[u])
    {
        if(v==p) continue;
        trace(v,u,select_u);
    }
}

int main()
{
    int n,u,v,w; cin>>n;
    for(int i = 0; i < n-1; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 0; i < n; i++)
    {
        cin >> w;
        value[i+1] = w;
    }

    DFS(1,0);
    trace(1,0,false);

    cout<<max(dp[1][0],dp[1][1])<<'\n';
    for(int node: nodes) cout<<node<<" ";
    return 0;
}
