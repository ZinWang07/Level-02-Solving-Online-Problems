#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2*1e5+9;
int n,q;
vector<ll> A(N), tree(N,0);

ll lowbit(int i)
{
    return (i & (-i));
}

void add(int i, ll delta)
{
    while(i<=n)
    {
        tree[i] += delta;
        i += lowbit(i);
    }
}

ll sum(int i)
{
    ll res = 0;
    while(i>0)
    {
        res += tree[i];
        i -= lowbit(i);
    }
    return res;
}

ll rangeSum(int l, int r)
{
    return sum(r) - sum(l-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>q;
    for(int i = 1; i <= n; i++) cin>>A[i];
    for(int i = 1; i <= n; i++) add(i, A[i]);

    while(q--)
    {
        int c,k,u; cin>>c>>k>>u;
        if(c==1)
        {
            ll delta = u - A[k];
            A[k] = u;
            add(k,delta);
        }
        else cout<<rangeSum(k,u)<<'\n';
    }
    return 0;
}

