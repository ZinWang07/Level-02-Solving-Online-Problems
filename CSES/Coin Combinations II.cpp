#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int INF = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    vector<int> coins(n), dp(x+1,0); dp[0] = 1;
    for(int i = 0; i < n; i++) cin>>coins[i];

    for(int c: coins)
        for(int money = 1; money <= x; money++)
            if(money - c >= 0)
                dp[money] = (dp[money] + dp[money-c]) % INF;

    cout<<dp[x];
    return 0;
}
