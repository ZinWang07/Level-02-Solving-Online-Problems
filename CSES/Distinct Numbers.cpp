#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    map<int,int> cnt;
    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        cnt[a]++;
    }
    cout<<cnt.size();
    return 0;
}
