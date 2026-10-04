#include <iostream>
#include <vector>
using namespace std;
int sol()
{
    int n,ans=0; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];

    long long s=0;
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]+s>0)
        {
            ans++;
            s+=A[i];
        }
        else s=0;
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
