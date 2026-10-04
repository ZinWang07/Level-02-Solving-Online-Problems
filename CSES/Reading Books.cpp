#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll ans = 0, sum = 0, maxi = 0;
    for(int i = 0; i < n; ++i)
    {
        ll a; cin>>a;
        sum += a;
        maxi = max(maxi,a);
    }
    ans = max(sum,maxi*2);
    cout<<ans;
    return 0;
}
