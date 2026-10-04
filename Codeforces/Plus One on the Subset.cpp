#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];

    sort(A,A+n);
    return A[n-1]-A[0];
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
