#include <iostream>
using namespace std;
int sol()
{
    int n; cin>>n;
    if(n==2) return 2;
    else if(n==3) return 3;
    else return 2;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
