#include <iostream>
using namespace std;
bool check()
{
    int a,b; cin>>a>>b;
    return (a%2!=0 && b%2!=0);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
