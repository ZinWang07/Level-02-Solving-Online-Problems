#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s; cin>>s;
    ll cnt = 1,ans = 0;
    int i = 0;
    while(s[i]!='\0')
    {
        if(s[i]==s[i+1]) cnt++;
        else
        {
            ans = max(ans,cnt);
            cnt = 1;
        }
        i++;
    }
    ans = max(ans,cnt);
    cout<<ans;
    return 0;
}
