#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x; cin>>n>>x;
    ll ans = 0, pre = 0;
    map<ll,int> cnt;
    cnt[0] = 1;

    for(int i = 1; i <= n; i++)
    {
        int a; cin >> a;
        pre += a;
        if(cnt.find(pre-x) != cnt.end()) ans += cnt[pre-x];
        cnt[pre]++;
    }

    cout<<ans;
    return 0;
}

