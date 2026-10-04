#include <iostream>
using namespace std;
bool check()
{
    int a,b,c,d; cin>>a>>b>>c>>d;
    return ((a==b) && (b==c) && (c==d));
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
