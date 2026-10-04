#include <iostream>
using namespace std;

int sol()
{
    int n,k,cnt=0; cin>>n>>k;
    int A[n+1];
    for(int i=1;i<=n;++i) cin>>A[i];

    for(int i=1;i<=n;++i)
    {
        if((A[i]>0) && (A[i]>=A[k])) ++cnt;
    }
    return cnt;
}

int main()
{
    cout<<sol()<<'\n';
    return 0;
}
