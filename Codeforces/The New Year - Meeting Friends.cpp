#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int A[3]; cin>>A[0]>>A[1]>>A[2];
    sort(A,A+3);

    return abs((A[2]-A[1])) + abs((A[0]-A[1]));
}
int main()
{
    cout<<sol();
    return 0;
}
