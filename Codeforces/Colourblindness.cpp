#include <iostream>
#include <string>
using namespace std;
bool check()
{
    int n,i=0; cin>>n;
    string s1,s2; cin>>s1>>s2;

    while(i<n)
    {
        if((s1[i]=='B' && s2[i]=='G') || (s1[i]=='G' && s2[i]=='B')) i++;
        else if(s1[i]!=s2[i]) return false;
        else i++;
    }
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
