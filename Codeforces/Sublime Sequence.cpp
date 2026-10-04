#include <iostream>
using namespace std;
int sol()
{
    int x,n; cin>>x>>n;
    if(n%2==0) return 0;
    return x;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
