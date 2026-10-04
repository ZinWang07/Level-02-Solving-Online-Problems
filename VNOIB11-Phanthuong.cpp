#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1005;
int n,k;
int A[N][N];
vector<vector<ll>> PS(N, vector<ll>(N,0));

void input()
{
    cin>>n>>k;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            cin>>A[i][j];
    return;
}

ll sol()
{
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            PS[i][j]=A[i][j]+PS[i-1][j]+PS[i][j-1]-PS[i-1][j-1];

    ll ansmax=0,sum;
    for(int i=k;i<=n;++i)
        for(int j=k;j<=n;++j)
        {
            sum=PS[i][j]-PS[i-k][j]-PS[i][j-k]+PS[i-k][j-k];
            ansmax=max(ansmax,sum);
        }
    return ansmax;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    input();
    cout<<sol();
    return 0;
}
