#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n; ll M;
vector<ll> A,L,R,H;
vector<ll> preA, preH;

void precompute()
{
    L.resize(n); R.resize(n); H.resize(n);

    L[0] = A[0];
    for(int i = 1; i < n; i++) L[i] = max(L[i-1],A[i]);

    R[n-1] = A[n-1];
    for(int i = n - 2; i >= 0; --i) R[i] = max(R[i+1],A[i]);

    for(int i = 0; i < n; i++) H[i] = min(L[i],R[i]);
}

void buildPrefix(vector<ll>& B, vector<ll>& pre)
{
    sort(B.begin(),B.end());

    pre.resize(n+1); pre[0] = 0;
    for(int i = 0; i < n; i++) pre[i+1] = pre[i] + B[i];
}

ll calc(vector<ll>& B, vector<ll>& pre, ll x)
{
    int pos = upper_bound(B.begin(),B.end(),x) - B.begin();
    ll sumGreaterThanX = pre[n] - pre[pos];
    ll cntGreaterThanX = n - pos;
    return sumGreaterThanX - cntGreaterThanX * x;
}

bool check(ll x)
{
    ll after = calc(H,preH,x), before = calc(A,preA,x);
    return (after-before>=M);
}

ll bin(ll nn, ll cn)
{
    ll left = nn, right = cn, ans = -1;
    while(left<=right)
    {
        ll mid = (left + right) / 2;
        if(check(mid))
        {
            left = mid + 1;
            ans = mid;
        }
        else right = mid - 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>M;
    A.resize(n);
    ll nn = 2*1e9+7, cn = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>A[i];
        nn = min(nn,A[i]);
        cn = max(cn,A[i]);
    }
    precompute();

    vector<ll> sortA = A, sortH = H;
    buildPrefix(sortA,preA);
    buildPrefix(sortH,preH);

    A = sortA;
    H = sortH;
    cout<<bin(nn,cn);
    return 0;
}
