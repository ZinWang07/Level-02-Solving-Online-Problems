#include <iostream>
using namespace std;
void sol()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++) cout<<n+i<<" ";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
        cout<<'\n';
    }
    return 0;
}
