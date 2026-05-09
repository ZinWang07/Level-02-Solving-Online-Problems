#include <iostream>
#include <string>
using namespace std;
bool check()
{
    string s; cin>>s;
    if((s=="abc") || (s=="cba") || (s=="bac") || (s=="acb")) return true;
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
