#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    int m; cin>>m;
    vector<int> B(m);
    for(int i=0;i<m;i++) cin>>B[i];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0,i=0,j=0;
    while(i<n && j<m)
    {
        if(abs(A[i]-B[j])<=1)
        {
            ans++;
            i++; j++;
        }
        else if(A[i]<B[j])
        {
            i++;
        }
        else j++;
    }
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
