#include <iostream>
#include <string>
#include <map>
using namespace std;
int sol()
{
    int n,m,ans=0; cin>>n>>m;
    string s; cin>>s;
    map<char,int> mp;

    for(int i=0;i<n;++i) mp[s[i]]++;

    for(char c='A';c<='G';c++)
    {
        if(mp[c]<m) ans+=(m-mp[c]);
    }

    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
