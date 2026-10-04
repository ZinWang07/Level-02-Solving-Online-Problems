#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int A[3]; cin>>A[0]>>A[1]>>A[2];
    sort(A,A+3);
    return A[1];
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<"\n";
    }
    return 0;
}
