#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,n,x; string s; cin>>t;
    while(t--)
    {
        cin>>s;
        n = stoi(s);
        x = (int) sqrt(n);
        if(x*x == n) cout<<0<<" "<<x<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}
