#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int A[2*(n+1)];
    ll total = 0, pre[2*(n+1)];
    pre[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin>>A[i];
        A[i+n] = A[i];
        total += A[i];
    }

    if(total<=0)
    {
        cout<<"0";
        return 0;
    }

    for(int i = 1; i <= 2*n; i++)
        pre[i] = pre[i-1] + A[i];

    deque<ll> dq;
    ll ans = 0;
    for(int r = 1; r < 2*n; r++)
    {
        while(!dq.empty() && pre[dq.back()]>=pre[r])
        {
            dq.pop_back();
        }
        dq.push_back(r);

        if(r>=n)
        {
            int l = r - n + 1;
            while(!dq.empty() && dq.front()<l)
                dq.pop_front();
            int start = r - n;
            if(pre[dq.front()] > pre[start]) ans++;
        }
    }
    cout<<ans;
    return 0;
}
