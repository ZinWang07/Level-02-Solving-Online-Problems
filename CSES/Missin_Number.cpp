#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,ans=0; cin>>n;
    int A[n-1];
    for(int i=0;i<n-1;++i) cin>>A[i];
    sort(A,A+n-1);
    for(int i=0;i<n-1;++i)
        if(i+1!=A[i])
        {
            ans=i+1;
            break;
        }
    if(ans==0) ans=n;
    cout<<ans;
    return 0;
}

