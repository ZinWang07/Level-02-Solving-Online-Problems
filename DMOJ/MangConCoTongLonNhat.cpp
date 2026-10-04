#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll ans = -1e18, pre = 0, minpre = 0;

    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        pre += a;

        ans = max(ans,pre - minpre);
        minpre = min(minpre,pre);
    }
    cout<<ans;
    return 0;
}
