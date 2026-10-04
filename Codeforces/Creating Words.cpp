#include <iostream>
#include <string>
using namespace std;
void sol()
{
    string a,b; cin>>a>>b;
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    cout<<a<<" "<<b<<'\n';
    return;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}
