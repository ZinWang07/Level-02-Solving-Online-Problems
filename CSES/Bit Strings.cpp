#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e9+7;

ll cal(ll a, ll b)
{
    ll sum = 1; a %= N;
    while(b>0)
    {
        if(b&1) sum = (sum * a) % N;
        a = (a * a) % N;
        b>>=1;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    cout<<cal(2,n);
    return 0;
}
