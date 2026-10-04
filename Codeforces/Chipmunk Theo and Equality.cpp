#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
using namespace std;
using pii = pair<int, int>;

void solve()
{
    int n; cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin >> A[i];

    map<int, long long> total_steps;
    map<int, int> reach_cnt;

    for(int i=0;i<n;i++)
    {
        queue<pii> q;
        set<int> visited;

        q.push({A[i],0});
        visited.insert(A[i]);

        while(!q.empty())
        {
            pii curr = q.front(); q.pop();
            int u = curr.first;
            int steps = curr.second;

            total_steps[u] += steps;
            reach_cnt[u] += 1;

            if(u%2==0)
            {
                int next_u = u/2;
                if(visited.find(next_u) == visited.end())
                {
                    visited.insert(next_u);
                    q.push({next_u,steps+1});
                }
            }

            else
            {
                int next_u = u+1;
                if(visited.find(next_u)==visited.end())
                {
                    visited.insert(next_u);
                    q.push({next_u,steps+1});
                }
            }
        }
    }

    long long ans = -1;

    for(auto const&[val,count]:reach_cnt)
    {

        if(count == n)
        {
            if(ans==-1 || total_steps[val]<ans)
            {
                ans = total_steps[val];
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    return 0;
}
