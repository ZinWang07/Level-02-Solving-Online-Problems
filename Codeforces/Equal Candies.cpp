#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n,ans=0; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin>>A[i];

    if(n==1) return ans;

    sort(A.begin(),A.end());
    if(A[0]==A[n-1]) return ans;

    int small = A[0];
    for(int i=1;i<n;++i)
    {
        if(A[i]>small) ans+=A[i]-small;
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
