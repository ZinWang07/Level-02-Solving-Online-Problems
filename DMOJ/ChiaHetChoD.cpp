#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d; cin>>n>>d;
    ll pre = 0, ans = 0;
    int cnt[d] = {0}; cnt[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        pre += a;

        ll rem = ((pre%d) + d) % d;
        ans += cnt[rem];
        cnt[rem]++;
    }
    cout<<ans;
    return 0;
}
