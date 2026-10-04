#include <iostream>
#include <string>
#include <set>
using namespace std;
int sol()
{
    int n,i=0,cnt=0; cin>>n;
    string s; cin>>s;
    set<char> st;

    while(s[i]!='\0')
    {
        if(st.count(s[i])==0)
        {
            cnt+=2;
            st.insert(s[i]);
        }
        else cnt+=1;
        i++;
    }
    return cnt;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
