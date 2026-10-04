//Loi giai cua Dang
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> c={1, 5, 10, 20, 100};
    vector<int> dp(n+1, 1e9);

    dp[0]=0;

    for (int i=1; i<=n;i++){
        for (int a : c){
            if (i>=a){
                dp[i]=min(dp[i], dp[i-a]+1);
            }
        }
    }

    cout << dp[n];
    return 0;
}
