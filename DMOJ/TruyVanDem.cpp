#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q; cin>>n>>q;
    vector<int> pos[n+5];
    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        pos[a].push_back(i);
    }

    while(q--)
    {
        int l,r,x; cin>>l>>r>>x;

        if(pos[x].empty())
        {
            cout<<"0\n";
            continue;
        }

        auto it1 = lower_bound(pos[x].begin(),pos[x].end(),l);
        auto it2 = upper_bound(pos[x].begin(),pos[x].end(),r);

        cout<<(it2-it1)<<'\n';
    }
    return 0;
}
