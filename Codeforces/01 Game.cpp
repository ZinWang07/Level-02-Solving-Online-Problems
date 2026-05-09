#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check()
{
    string s; cin>>s;
    int i=0,cnt1=0,cnt0=0;

    while(s[i]!='\0')
    {
        if(s[i]=='1') cnt1++;
        else cnt0++;
        i++;
    }

    int turn = min(cnt1,cnt0);
    if(turn%2==0) return false;
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"DA\n";
        else cout<<"NET\n";
    }
    return 0;
}
