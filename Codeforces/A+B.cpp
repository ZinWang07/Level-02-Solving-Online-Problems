#include <iostream>
using namespace std;
int sol()
{
    char a,sign,b; cin>>a>>sign>>b;
    int num1 = a - 48, num2 = b - 48;

    return num1 + num2;
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
