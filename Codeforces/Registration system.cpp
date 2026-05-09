#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string,int> mp;

void sol()
{
    string s; cin>>s;
    if(!mp.count(s))
    {
        mp[s]++;
        cout<<"OK\n";
        return;
    }

    mp[s]++;
    int num=mp[s];
    cout<<s<<num-1<<'\n';
    return;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}
