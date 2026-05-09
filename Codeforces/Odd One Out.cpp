#include <iostream>
using namespace std;
int sol()
{
    int a,b,c; cin>>a>>b>>c;

    if(a==b) return c;
    else if(b==c) return a;
    return b;
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
