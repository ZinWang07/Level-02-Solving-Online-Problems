#include <iostream>
using namespace std;

int sol()
{
    int n,k; cin>>n>>k;

    while(k--)
    {
        if(n%10==0) n/=10;
        else n-=1;
    }

    return n;
}

int main()
{
    cout<<sol();
    return 0;
}
