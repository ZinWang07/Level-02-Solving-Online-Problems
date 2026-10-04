#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll sum = (n*(n+1))/2;
    for(int i = 1; i < n; i++)
    {
        int x; cin>>x;
        sum -= x;
    }
    cout<<sum;
    return 0;
}
