#include <iostream>
using namespace std;
void process()
{
    int n; cin>>n;
    long long A[n+1];
    for(int i=1;i<=n;i++) cin>>A[i];

    A[0]=0;
    for(int i=1;i<=n;i++) A[i]+=A[i-1];

    int m; cin>>m;
    for(int i=0;i<m;i++)
    {
        int tmp; cin>>tmp;
        int left=0, right=n, ans=0;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(A[mid]>=tmp)
            {
                ans = mid;
                right = mid-1;
            }
            else left=mid+1;
        }
        cout<<ans<<'\n';
    }
}
int main()
{
    process();
    return 0;
}
