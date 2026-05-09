#include <iostream>
using namespace std;
bool check()
{
    int n; cin>>n;
    int y = n%2020, x = ((n - y)/2020) - y;

    return x>=0;
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
