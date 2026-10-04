#include <iostream>
#include <string>
using namespace std;
bool check()
{
    int n,cnt1=0,cnt2=0; cin>>n;
    string s; cin>>s;

    for(int i=0; i<n;++i)
    {
        if(s[i]=='(') cnt1++;
        else cnt2++;
    }

    return cnt1==cnt2;
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
