#include <bits/stdc++.h>
#define ll long long
using namespace std;

int A[5][5];
ll ans = 0;

void backtrack(int i, int j, ll sum)
{
    sum += A[i][j];
    if(i == 4 && j == 4)
    {
        ans = max(ans,sum);
        return;
    }

    if(i + 1 <= 4) backtrack(i+1,j,sum);
    if(j + 1 <= 4) backtrack(i,j+1,sum);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i <= 4; i++)
        for(int j = 1; j <= 4; j++)
            cin>>A[i][j];

    backtrack(1,1,0);
    cout<<ans;
    return 0;
}
