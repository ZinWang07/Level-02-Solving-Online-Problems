#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2*1e5+9;
const ll INF = 4e18;
int n,q;
vector<ll> A(N), tree(4*N);

void build(int node, int l, int r)
{
    if(l == r)
    {
        tree[node] = A[l];
        return;
    }

    int mid = (l+r)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);

    tree[node] = min(tree[node*2],tree[node*2+1]);
}

ll query(int node, int l, int r, int ql, int qr)
{
    if(qr < l || r < ql) return INF;
    else if(ql <= l && r <= qr) return tree[node];

    int mid = (l + r) / 2;
    ll left = query(node*2,l,mid,ql,qr);
    ll right = query(node*2+1,mid+1,r,ql,qr);

    return min(left,right);
}

void update(int node, int l, int r, int pos, ll val)
{
    if(l == r)
    {
        tree[node] = val;
        return;
    }

    int mid = (l + r) / 2;
    if(pos <= mid) update(node*2,l,mid,pos,val);
    else update(node*2+1,mid+1,r,pos,val);

    tree[node] = min(tree[node*2],tree[node*2+1]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>q;
    for(int i = 1; i <= n; i++) cin>>A[i];
    build(1,1,n);

    while(q--)
    {
        int c,k,u; cin>>c>>k>>u;
        if(c == 1)
        {
            A[k] = u;
            update(1,1,n,k,u);
        }
        else cout<<query(1,1,n,k,u)<<'\n';
    }
    return 0;
}
