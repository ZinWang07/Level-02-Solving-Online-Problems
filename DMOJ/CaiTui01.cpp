#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 22;
int n;
int S, w[N], v[N];
ll ans = 0;

void backtrack(int i, ll cur_w, ll cur_v)
{
    ans = max(ans,cur_v);

    if(i>n) return;

    backtrack(i+1, cur_w, cur_v);

    if(cur_w + w[i] <= S) backtrack(i+1,cur_w+w[i],cur_v+v[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>S;
    for(int i = 1; i <= n; i++) cin>>w[i]>>v[i];

    backtrack(1,0,0);
    cout<<ans;
    return 0;
}
