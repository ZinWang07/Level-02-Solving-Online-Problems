#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll pre[n+1]; pre[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        pre[i] = pre[i-1] + a;
    }

    ll ans = -10000000007, min_pre = 0;
    for(int r = 1; r <= n; r++)
    {
        ans = max(ans,pre[r] - min_pre);
        min_pre = min(min_pre,pre[r]);
    }
    cout<<ans;
    return 0;
}

