#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n,ans=1; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin>>A[i];

    sort(A.begin(),A.end());
    A[0]++;

    for(int i=0;i<n;++i) ans*=A[i];

    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
