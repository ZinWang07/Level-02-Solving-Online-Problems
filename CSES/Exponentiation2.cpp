#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll m = 1e9+7;

ll cal(ll a, ll b, ll INF)
{
    ll sum = 1; a %= INF;
    while(b>0)
    {
        if(b&1) sum = (sum * a) % INF;
        a = (a * a) % INF;
        b>>=1;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    while(n--)
    {
        ll a,b,c; cin>>a>>b>>c;
        ll x = cal(b,c,m-1);
        if(x==0 && a==0) cout<<1<<'\n';
        else cout<<cal(a,x,m)<<'\n';
    }
    return 0;
}


