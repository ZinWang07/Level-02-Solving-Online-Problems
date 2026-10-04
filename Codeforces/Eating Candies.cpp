#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    int i=0,j=n-1,ans=0,alice=0,bob=0,cnt=0;
    while(cnt!=n && i!=j)
    {
        alice+=A[i];
        bob+=A[j];
        if(alice==bob)
        {
            cnt+=2;
            ans = max(ans,cnt);
            i++;
            j--;
        }
        else if(alice<bob)
        {
            i++; cnt+=2;
            for(int k=i;k<j;k++)
            {
                alice+=A[k];
                cnt++;
                if(alice==bob) ans = max(ans,cnt);
                else if(alice>bob) break;
            }
        }
    }
}
