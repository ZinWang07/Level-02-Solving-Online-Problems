#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
ll sol()
{
    ll n; cin>>n;

    if(n%2==0) return (n/2);
    return -(n+1) / 2;
}
int main()
{
    cout<<sol();
    return 0;
}
