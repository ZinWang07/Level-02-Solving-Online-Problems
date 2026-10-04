#include <iostream>
using namespace std;
int sol()
{
    int n,k,ans=0; cin>>n>>k;
    int A[n];
    for(int i=0;i<n;++i)
    {
        cin>>A[i];
        if((A[i]+k)<=5) ++ans;
    }

    return ans/3;
}
int main()
{
    cout<<sol();
    return 0;
}
