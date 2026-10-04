#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check()
{
    vector<pair<char,int>> v;
    v.push_back({'c',1});
    v.push_back({'d',1});
    v.push_back({'e',1});
    v.push_back({'f',1});
    v.push_back({'o',1});
    v.push_back({'r',1});
    v.push_back({'s',1});

    char c; cin>>c;
    for(auto e: v)
    {
        if(c == e.first) return true;
    }
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
