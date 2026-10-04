#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, t;
vector<ll> K(2*1e5+7);

bool check(ll x)
{
    ll sum = 0;
    for(ll i = 1; i <= n; i++)
    {
        sum += x / K[i];
        if(sum >= t) return true;
    }
    return false;
}

ll bin(ll f)
{
    ll left = 1, right = f*t;
    while(left<=right)
    {
        ll mid = (left+right)/2;
        if(check(mid)) right = mid - 1;
        else left = mid + 1;
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>t;
    ll fastest = 1e9+7;
    for(ll i = 1; i <= n; i++)
    {
        cin>>K[i];
        fastest = min(fastest,K[i]);
    }
    cout<<bin(fastest);
    return 0;
}
