#include <iostream>
#include <algorithm>
using namespace std;
void process()
{
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];
    sort(A,A+n);
    for(int i=0;i<n;++i) cout<<A[i]<<" ";
}
int main()
{
    process();
    return 0;
}
