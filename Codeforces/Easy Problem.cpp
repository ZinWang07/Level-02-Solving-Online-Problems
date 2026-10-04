#include <iostream>
using namespace std;
int sol()
{
    int n; cin>>n;
    return n-1;
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
