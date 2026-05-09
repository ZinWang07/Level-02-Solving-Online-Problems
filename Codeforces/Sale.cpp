#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long sol()
{
    int n,m; cin>>n>>m;
    long long ans=0;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin>>A[i];

    sort(A.begin(),A.end());
    for(int i=0;i<n && m>0;++i)
    {
        if(A[i]>0 && m>0) break;
        ans+=abs(A[i]);
        m--;
    }

    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
