#include <iostream>
using namespace std;
int sol()
{
    int n,h,ans=0; cin>>n>>h;
    int A[n];

    for(int i=0;i<n;++i)
    {
        cin>>A[i];
        if(A[i]<=h) ++ans;
        else ans+=2;
    }

    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
