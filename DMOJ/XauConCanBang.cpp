#include <bits/stdc++.h>
using namespace std;

const int offset = 1e5;
int cnt[2 * offset + 5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    long long ans = 0, pre = 0;
    cnt[0 + offset] = 1;

    for(char c: s)
    {
        if(c=='1') pre += 1;
        else pre -= 1;

        ans += cnt[pre + offset];
        cnt[pre + offset]++;
    }

    cout<<ans;
    return 0;
}
