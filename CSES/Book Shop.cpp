#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    vector<int> dp(x+1,0), pages(n), prices(n);
    for(int i = 0; i < n; i++) cin>>prices[i];
    for(int i = 0; i < n; i++) cin>>pages[i];

    for(int i = 0; i < n; i++)
        for(int money = x; money >= prices[i]; money--)
            dp[money] = max(dp[money], dp[money-prices[i]] + pages[i]);

    cout<<dp[x];
    return 0;
}
