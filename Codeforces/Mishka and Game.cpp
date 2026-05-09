#include <iostream>
using namespace std;
void sol()
{
    int n,mishka=0,chris=0; cin>>n;
    while(n--)
    {
        int a,b; cin>>a>>b;
        if(a>b) ++mishka;
        else if(a<b) ++chris;
    }

    if(mishka>chris) cout<<"Mishka";
    else if(mishka<chris) cout<<"Chris";
    else cout<<"Friendship is magic!^^";
    return;
}
int main()
{
    sol();
    return 0;
}
