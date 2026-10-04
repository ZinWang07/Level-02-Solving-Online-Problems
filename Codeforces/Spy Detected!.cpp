#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int sol()
{
    int n,num; cin>>n;
    int A[n+1];
    map<int,int> mp;
    for(int i = 1; i <= n; ++i)
    {
        cin>>A[i];
        ++mp[A[i]];
    }
    for(const auto &e: mp)
    {
        if(e.second == 1) num = e.first;
    }
    for(int i = 1; i <= n; ++i)
    {
        if(A[i] == num) return i;
    }
    return 0;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<"\n";
    }
    return 0;
}
