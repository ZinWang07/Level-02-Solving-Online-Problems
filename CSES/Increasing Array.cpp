#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin>>A[i];

    ll ans = 0;
    for(int i = 1; i < n; i++)
        if(A[i-1]>A[i])
        {
            ll tmp = A[i-1]-A[i];
            ans += tmp;
            A[i] += tmp;
        }
    cout<<ans;
    return 0;
}
