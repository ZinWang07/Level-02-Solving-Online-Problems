#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int n,ans=1,cnt=1; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    for(int i=1;i<n;i++)
        if(A[i]>A[i-1]) cnt++;
        else
        {
            ans = max(ans,cnt);
            cnt=1;
        }
    ans = max(ans,cnt);
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
