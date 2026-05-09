#include <iostream>
#include <string>
using namespace std;
string ans()
{
    string s,s1; cin>>s;
    s1 = s.substr(0,2);
    for(int i=3;i<s.size();i+=2) s1+=s[i];
    return s1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<ans()<<'\n';
    }
    return 0;
}
