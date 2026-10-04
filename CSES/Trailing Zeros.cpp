#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll k = log(n) / log(5), ans = 0;
    for(int i = 1; i <= k; i++) ans += n/pow(5,i);
    cout<<ans;
    return 0;
}

