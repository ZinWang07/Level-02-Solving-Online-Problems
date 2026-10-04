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
        b >>= 1;
    }
    return res;
}

bool is_prime(ll n)
{
    if(n < 2) return false;
    for(ll p: {2,3,5,7,11,13,17})
        if(n%p==0) return n==p;

    ll d = n - 1; int s = 0;
    while(!(d & 1))
    {
        d>>=1; s++;
    }

    for(ll a: {2,3,5,7,11,13,17})
    {
        if(a>=n) continue;
        ll x = power(a,d,n);
        if(x==1 || x==n-1) continue;

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

int main() {
    // Tối ưu hóa nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;

    if (is_prime(n)) {
        cout << n << " la SO NGUYEN TO.\n";
    } else {
        cout << n << " la HOP SO.\n";
    }

    return 0;
}
