#include <iostream>
using namespace std;
bool check()
{
    int n,k; long long x; cin>>n>>k>>x;
    while(x!=0 && k>0)
    {
        if(x<n) x-=x;
        else x-=n;
        n--;
        k--;
    }

    if(k>0) return false;
    else if(x>0) return false;
    return true;
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
