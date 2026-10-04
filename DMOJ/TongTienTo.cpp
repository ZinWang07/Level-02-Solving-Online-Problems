#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin >> n >> q;
    int A[n+1];
    long long B[n+1];

    for(int i = 1; i <= n; i++) cin>>A[i];
    B[0] = 0;
    for(int i = 1; i <= n; i++) B[i] = B[i-1] + A[i];

    while(q--)
    {
        int l,r; cin>>l>>r;
        cout<<B[r] - B[l-1]<<'\n';
    }
    return 0;
}
