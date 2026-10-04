#include <iostream>
using namespace std;
bool check()
{
    int n,k,tmp=0; cin>>n>>k;
    int A[n]; bool kt=true;
    for(int i = 0; i < n; ++i)
    {
        cin>>A[i];
        if(A[i]<tmp) kt=false;
        tmp = A[i];
    }
    if(k>=2) return true;
    else if(kt && k==1) return true;
    return false;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
