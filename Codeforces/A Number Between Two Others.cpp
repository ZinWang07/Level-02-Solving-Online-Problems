#include <iostream>
using namespace std;
bool check()
{
    long long x,y; cin>>x>>y;
    if(y==2*x) return false;
    else return true;
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
