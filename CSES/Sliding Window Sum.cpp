#include <iostream>
#include <vector>
using namespace std;
long long sol()
{
    int n,k; cin>>n>>k;
    int x,a,b,c; cin>>x>>a>>b>>c;

    vector<long long> A(n),B; A[0]=x;
    for(int i=1;i<n;i++)
    {
        A[i] = (a*A[i-1] + b) % c;
    }

    long long ans=0,sum=0; int right=0;
    for(int left=0;left<n-k+1;++left)
    {
        while(right<n && right-left<k)
        {
            sum+=A[right];
            right++;
        }
        B.push_back(sum);
        sum-=A[left];
    }

    ans = B[0];
    for(int i=1;i<(int) B.size();i++) ans^=B[i];

    return ans;
}
int main()
{
    cout << sol();
    return 0;
}
