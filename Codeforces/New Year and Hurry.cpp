#include <iostream>
using namespace std;
int sol()
{
    int n,k,i; cin>>n>>k;
    int A[n+1], remain = 240-k; A[1]=5;
    if(remain<5) return 0;

    for(i=2; i<=n; ++i)
    {
        A[i] = A[i-1] + 5*i;
        if(A[i]>remain) break;
    }

    return i-1;
}
int main()
{
    cout<<sol();
    return 0;
}
