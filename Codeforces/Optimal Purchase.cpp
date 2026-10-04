#include <iostream>
#include <algorithm>
using namespace std;
long long sol()
{
    long long n,a,b; cin>>n>>a>>b;
    return (n / 3) * min(3 * a, b) + min((n % 3) * a, b);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
