#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
bool check(string s)
{
    string t = s;
    reverse(t.begin(),t.end());
    return t==s;
}

bool check2(string s)
{
    set<char> st;
    for(int i=0;i<s.size();i++) st.insert(s[i]);
    return st.size()>1;
}

void process()
{
    string s; cin>>s;
    if(!check(s))
    {
        cout<<"YES\n";
        for(int i=s.size()-1;i>=0;i--) cout<<s[i];
        cout<<'\n';
    }
    else
    {
        if(check2(s))
        {
            cout<<"YES\n";
            for(int i=1;i<s.size();i++) cout<<s[i];
            cout<<s[0];
            cout<<'\n';
        }
        else cout<<"NO\n";
    }
}
int main()
{
    int t; cin>>t; getchar();
    while(t--) process();
    return 0;
}
