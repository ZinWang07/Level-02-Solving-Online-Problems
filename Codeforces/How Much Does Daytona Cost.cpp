#include <iostream>
using namespace std;
bool sol()
{
    int n,k; cin>>n>>k;
    int A[n];
    bool kt=false;

    for(int i=0;i<n;++i)
    {
        cin>>A[i];
        if(A[i]==k) kt=true;
    }

    return kt;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(sol()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
