#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n,ans=0; cin>>n;
    vector<int> A(n+1), dp(n+1,0);

    for(int i=1;i<=n;i++) cin>>A[i];
    A[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i]>=A[i-1]) dp[i] = dp[i-1]+1;
        else
        {
            ans=max(ans,dp[i-1]);
            dp[i]=1;
        }
    }
    ans = max(ans,dp[n]);
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
