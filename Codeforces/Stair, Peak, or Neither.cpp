#include <iostream>
using namespace std;
void sol()
{
    int a,b,c; cin>>a>>b>>c;
    if((a<b) && (b<c)) cout<<"STAIR\n";
    else if((a<b) && (b>c)) cout<<"PEAK\n";
    else cout<<"NONE\n";
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
