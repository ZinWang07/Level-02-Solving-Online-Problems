#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

bool cmp(const pii& a, const pii& b)
{
    return a.first<b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<pii> tasks(n+1);
    for(int i = 1; i <= n; i++) cin>>tasks[i].first>>tasks[i].second;

    sort(tasks.begin(),tasks.end(),cmp);
    ll time = 0, ans = 0;
    for(auto e: tasks)
    {
        time += e.first;
        ans += e.second - time;
    }
    cout<<ans;
    return 0;
}
