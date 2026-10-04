#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int A[n+1];
    ll total = 0, pre = 0, ans = -1e18;
    for(int i = 1; i <= n; i++)
    {
        cin>>A[i];
        total+=A[i];
    }

    for(int i = 1; i <= n; i++)
    {
        pre+=A[i];

        ans = max(ans,abs(total - 2*pre));
    }
    cout<<ans;
    return 0;
}
