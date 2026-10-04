#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n,m,i; cin>>n>>m;
    vector<int> A(m);
    for(i=0;i<m;++i) cin>>A[i];

    sort(A.begin(),A.end());
    int small=1001, high=0,loop=m-n,j,ans=1001;
    i=0;

    while(i<=loop)
    {
        j=0+i;
        ans=min(ans,A[n+i-1]-A[j]);
        if(ans==0) break;
        i++;
    }

    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
