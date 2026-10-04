#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

bool cmp1(const pii& a, const pii& b)
{
    return a.first < b.first;
}

bool cmp2(const pii& a, const pii& b)
{
    return a.second>b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<pii> group1,group2;
    for(int i = 0; i < n; i++)
    {
        int u,v; cin>>u>>v;
        if(u<v) group1.push_back({u,v});
        else group2.push_back({u,v});
    }

    sort(group1.begin(),group1.end(),cmp1);
    sort(group2.begin(),group2.end(),cmp2);

    ll timeA = 0, timeB = 0;
    for(auto x: group1)
    {
        timeA += x.first;
        timeB = max(timeB, timeA) + x.second;
    }

    for(auto x: group2)
    {
        timeA += x.first;
        timeB = max(timeB, timeA) + x.second;
    }
    cout<<timeB;
    return 0;
}
