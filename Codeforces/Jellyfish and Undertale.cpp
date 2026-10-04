#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long sol()
{
    int a,b,n; long long ans; cin>>a>>b>>n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin>>A[i];
    sort(A.begin(),A.end());

    ans = b;

    for(int i=0;i<n;++i)
    {
        ans+=min(a-1,A[i]);
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
