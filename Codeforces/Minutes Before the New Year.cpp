#include <iostream>
using namespace std;
int sol()
{
    int h,m; cin>>h>>m;
    int minute = h*60 + m;
    return 1440 - minute;
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
