#include <iostream>
using namespace std;
int sol()
{
    int n,r; cin>>n>>r;
    for(int i=1;i<=10;i++)
    {
        if((i*n%10==0) || ((i*n - r)%10==0)) return i;
    }
    return 10;
}
int main()
{
    cout<<sol();
    return 0;
}
