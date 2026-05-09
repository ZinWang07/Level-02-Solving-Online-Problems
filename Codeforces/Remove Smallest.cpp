#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check()
{
    int n; cin>>n;
    vector<int> A(n);
    for(int i=0; i<n; ++i)
    {
        cin>>A[i];
    }
    if(n==1) return true;

    sort(A.begin(),A.end());

    for(int i=1; i<n; ++i)
    {
        if(abs(A[i]-A[i-1])>1) return false;
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
