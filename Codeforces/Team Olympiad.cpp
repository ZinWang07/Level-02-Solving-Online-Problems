#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void process()
{
    int n; cin>>n;
    vector<pair<int,int>> A(n+1,0);
    map<int,int> mp;
    for(int i=1;i<=n;++i)
    {
        int u; cin>>u;
        A.push_back({u,i});
    }

    sort(A.begin(),A.end());
    for(i)
}
