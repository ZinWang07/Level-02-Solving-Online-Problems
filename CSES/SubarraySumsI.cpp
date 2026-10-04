#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    map<ll,int> cnt; cnt[0] = 1;
    ll pre = 0, ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        pre += a;
        ans += cnt[pre-x];
        cnt[pre]++;
    }
    cout<<ans;
    return 0;
}


