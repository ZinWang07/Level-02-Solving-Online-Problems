#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; cin>>n>>k;
    ll pre[n+1], ans = 0; pre[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        pre[i] = pre[i-1] + a;
    }

    for(int r = 1; r <= n; r++)
    {
        ll target = pre[r] - k;
        ans += upper_bound(pre,pre+r+1,target) - (pre);
    }
    cout<<ans;
    return 0;
}
