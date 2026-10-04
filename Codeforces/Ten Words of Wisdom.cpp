#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#define pii pair<int,int>
using namespace std;
bool cmp(const pair<int,pii>& a, const pair<int,pii>& b)
{
    return a.second.second > b.second.second;
}

int sol()
{
    int n; cin>>n;
    map<int,pair<int,int>> mp;
    for(int i=0;i<n;i++)
    {
        int len,quality; cin>>len>>quality;
        mp[i+1] = {len,quality};
    }

    vector<pair<int,pii>> A(mp.begin(),mp.end());
    sort(A.begin(),A.end(),cmp);

    int ans=0;
    if(n==1) return 1;

    for(const auto& a: A)
    {
        if(a.second.first<=10)
        {
            ans = a.first;
            break;
        }
    }
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
