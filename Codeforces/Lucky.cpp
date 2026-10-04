#include <iostream>
using namespace std;
bool check()
{
    char tmp,loop=3; int sum1=0,sum2=0;
    while(loop--)
    {
        cin>>tmp;
        sum1+=tmp-48;
    }
    loop=3;
    while(loop--)
    {
        cin>>tmp;
        sum2+=tmp-48;
    }

    return (sum1==sum2);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
