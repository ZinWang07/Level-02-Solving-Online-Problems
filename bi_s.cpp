#include <bits/stdc++.h>
using namespace std;
int n,q,x;
vector<int> A(1e5+5);

int tknp(int a)
{
    int left=0, right=n-1, ans=-2;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if((A[mid]<=a))
        {
            ans=mid;
            left=mid+1;
        }
        else right=mid-1;
    }
    return ans;
}

void input()
{
    cin>>n>>q;
    for(int i=0;i<n;++i) cin>>A[i];
    while(q--)
    {
        cin>>x;
        cout<<tknp(x)+1<<"\n";
    }
}

int main()
{
    input();
    return 0;
}
