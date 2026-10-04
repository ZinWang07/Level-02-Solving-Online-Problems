#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int INF = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    vector<int> coins(n), dp(x+1,INF); dp[0] = 0;
    for(int i = 0; i < n; i++) cin>>coins[i];

    for(int money = 1; money <= x; money++)
        for(int c: coins)
            if(money - c >= 0 && dp[money - c] != INF)
                dp[money] = min(dp[money],dp[money-c]+1);

    if(dp[x]==INF) cout<<"-1";
    else cout<<dp[x];
    return 0;
}
