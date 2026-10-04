#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check()
{
    int n; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin>>A[i];

    sort(A.begin(),A.end());
    for(int i=1;i<n;++i)
    {
        if(A[i-1]==A[i]) return false;
    }
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
