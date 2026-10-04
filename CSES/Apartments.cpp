#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, ans = 0; cin>>n>>m>>k;
    vector<int> A(n),B(m);
    bool used[m] = {false};
    for(int i = 0; i < n; i++) cin>>A[i];
    for(int i = 0; i < m; i++) cin>>B[i];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(B[j] < A[i] - k) j++;
        else if(B[j] > A[i] + k) i++;
        else
        {
            ans++;
            i++;
            j++;
        }
    }

    cout<<ans;
    return 0;
}
