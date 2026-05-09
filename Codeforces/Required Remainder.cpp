#include <iostream>
using namespace std;
int sol()
{
    int x,y,n; cin>>x>>y>>n;
    return n - (n-y) % x;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<"\n";
    }
    return 0;
}
