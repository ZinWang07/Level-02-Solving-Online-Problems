#include <bits/stdc++.h>
using namespace std;
int n,q;
int A[100005];
void process()
{
    cin>>n>>q;
    for(int i=1;i<=n;++i) cin>>A[i];
    while(q--)
    {
        int l,r,x,dem=0; cin>>l>>r>>x;
        sort(A+l,A+r);
        for(int i=l;i<=r;++i)
        {
            if(A[i]==x) dem++;
        }
        cout<<dem<<" ";
    }
}

int main()
{
    process();
    return 0;
}
