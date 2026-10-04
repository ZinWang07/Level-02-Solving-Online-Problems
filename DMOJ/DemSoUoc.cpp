#include <bits/stdc++.h>
#define ll long long
#define i128 __int128_t
using namespace std;

ll mul(ll a, ll b, ll m)
{
    return (i128) a * b % m;
}

ll power(ll a, ll b, ll m)
{
    ll res = 1;
    while(b>0)
    {
        if(b & 1) res = mul(res,a,m);
        a = mul(a,a,m);
        b>>=1;
    }
    return res;
}

bool is_prime(ll n) //kiem tra nhanh so nguyen to = Miller-Rabin
{
    if(n<2) return false;
    for(ll p: {2,3,5,7,11,13,17})
        if(n%p==0) return n==p;

    ll d = n - 1; int s = 0;
    while(!(d&1))
    {
        d>>=1;
        s++;
    }

    for(ll a: {2,3,5,7,11,13,17})
    {
        if(a>=n) continue;
        ll x = power(a,d,n);
        if(x==1 || x == n-1) continue;
        bool composite = true;

        for(int r = 1; r < s; r++)
        {
            x = mul(x,x,n);
            if(x==n-1)
            {
                composite = false;
                break;
            }
        }

        if(composite) return false;
    }
    return true;
}

ll f(ll x, ll c, ll m)
{
    return (mul(x,x,m) + c) % m;
}

ll PollardRho(ll n)
{
    if(n%2==0) return 2;
    if(n%3==0) return 3;

    ll rua = 2, tho = 2, c = 1, g = 1;
    while(g==1)
    {
        rua = f(rua,c,n);
        tho = f(tho,c,n);
        tho = f(tho,c,n);

        ll diff = abs(rua-tho);
        g = gcd(diff,n);

        if(g==n)
        {
            c++;
            rua = 2;
            tho = 2;
            g = 1;
        }
    }
    return g;
}

map<ll,int> prime;

void factorize(ll n)
{
    if(n<2) return;

    if(is_prime(n))
    {
        prime[n]++;
        return;
    }

    ll g = PollardRho(n); //tim so uoc bang Pollard's Rho

    factorize(g);
    factorize(n/g);
}

int main()
{
    ll n, ans = 1; cin>>n;
    factorize(n);

    for(auto const& [factor,cnt]: prime) ans *= (cnt+1);

    cout<<ans;
    return 0;
}
