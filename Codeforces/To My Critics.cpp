#include <iostream>
using namespace std;
bool check()
{
    int a,b,c; cin>>a>>b>>c;
    if(a+b>=10) return true;
    if(a+c>=10) return true;
    if(b+c>=10) return true;
    return false;
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
