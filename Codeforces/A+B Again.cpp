#include <iostream>
using namespace std;
int sol()
{
    char a,b; cin>>a>>b;

    return (a-48) + (b-48);
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
