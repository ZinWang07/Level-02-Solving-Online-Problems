#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF = 1e9+7;

ll cal(ll a, ll b)
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
        ll a,b; cin>>a>>b;
        if(b==0) cout<<1<<'\n';
        else cout<<cal(a,b)<<'\n';
    }
    return 0;
}

