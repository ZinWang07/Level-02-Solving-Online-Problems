#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 22;
int n;
ll k;
vector<ll> A(N,0);
bool check = false;

void backtrack(int i, ll sum)
{
    if(sum==k)
    {
        check = true;
        return;
    }

    if(i>n || sum>k || check) return;

    backtrack(i+1,sum + A[i]);
    backtrack(i+1,sum);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>k;
    for(int i = 1; i <= n; i++) cin>>A[i];

    backtrack(1,0);

    if(check) cout<<"YES";
    else cout<<"NO";
    return 0;
}
