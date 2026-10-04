#include <iostream>
#include <map>
using namespace std;
int sol()
{
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    if(n<3) return -1;
    map<int,int> mp;
    for(int i=0;i<n;i++) mp[A[i]]++;

    for(auto e: mp)
        if(e.second>=3) return e.first;
    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
