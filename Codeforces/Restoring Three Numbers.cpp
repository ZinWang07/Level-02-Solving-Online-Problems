#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sol()
{
    vector<int> A(4); int val;
    for(int i=0;i<4;++i) cin>>A[i];

    sort(A.begin(),A.end());
    val=A[3];

    for(int i=0;i<3;++i)
    {
        cout<<val-A[i]<<" ";
    }
}
int main()
{
    sol();
    return 0;
}
