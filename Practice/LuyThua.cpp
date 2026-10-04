#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c; cin>>a>>b>>c;
    ll ans = 1; a %= c;

    while(b>0)
    {
        if(b&1) ans = ans * a % c;
        a = a * a % c;
        b>>=1;
    }

    cout<<ans;
    return 0;
}
