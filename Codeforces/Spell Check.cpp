#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool check()
{
    int n; cin>>n;
    string s,name = "Timur"; cin>>s;
    if(n!=5) return false;

    int i=0, cnt_up=0;
    while(s[i]!='\0')
    {
        if(isupper(s[i])) ++cnt_up;
        i++;
    }

    if(cnt_up==1) return true;
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
