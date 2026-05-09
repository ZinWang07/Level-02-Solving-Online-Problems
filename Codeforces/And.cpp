#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int a,b,c; cin>>a>>b>>c;
    int nn = min(a,min(b,c));
    int ln = max(a,max(b,c));
    int med = (nn+ln)/2;
    return (med ^ 20260401) ^ 20260401;
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
