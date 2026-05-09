#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int n,sum1=0,sum2=0,ans=0; cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum1+=A[i];
    }

    sort(A,A+n);
    for(int i=n-1;i>=0;--i)
    {
        sum2+=A[i];
        sum1-=A[i];
        ans++;
        if(sum2>sum1) break;
    }
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
