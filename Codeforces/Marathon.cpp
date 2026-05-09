#include <iostream>
using namespace std;
int sol()
{
    int a,loop=3,tmp,ans=0; cin>>a;
    while(loop--)
    {
        cin>>tmp;
        if(tmp>a) ++ans;
    }

    return ans;
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
