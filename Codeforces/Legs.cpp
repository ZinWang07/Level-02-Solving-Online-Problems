#include <iostream>
using namespace std;
int sol()
{
    int n,i,j; cin>>n;
    for(i=0;i<=n;++i)
        for(j=0;j<=n;++j)
            if(i*2 + j*4 == n) return i+j;
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
