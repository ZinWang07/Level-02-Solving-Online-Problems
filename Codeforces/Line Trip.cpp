#include <iostream>
using namespace std;

int sol()
{
    int n,x,len=0; cin>>n>>x;
    int A[n+1],ans=0; A[0]=0;
    for(int i=1;i<=n;++i)
    {
        cin>>A[i];
        len=abs(A[i]-A[i-1]);
        ans=max(ans,len);
    }
    ans=max(ans,abs(x-A[n])+abs(A[n]-x));
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
