#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int M = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll dp[n+1] = {0}; dp[0] = 1;
    for(int i = 1; i <= n; i++)
        for(int dice = 1; dice <= 6; dice++)
            if(i - dice >= 0)
                dp[i] = (dp[i] + dp[i-dice]) % M;
    cout<<dp[n];
    return 0;
}
