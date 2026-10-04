#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n,q;
int A[N];

int BS(int x)
{
    int left = 1, right = n, pos = -1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(A[mid] == x)
        {
            pos = mid;
            right = mid-1;
        }
        else if(A[mid]>x) right = mid - 1;
        else left = mid + 1;
    }
    return pos;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>q;
    for(int i = 1; i <= n; i++) cin>>A[i];
    while(q--)
    {
        int x; cin>>x;
        cout<<BS(x)<<'\n';
    }
    return 0;
}

