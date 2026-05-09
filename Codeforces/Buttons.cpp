#include <iostream>
using namespace std;
bool check()
{
    int a,b,c; cin>>a>>b>>c;
    if(c%2==0)
    {
        a+=c/2;
        b+=c/2;
    }
    else
    {
        a+=(c/2)+1;
        b+=c/2;
    }

    return (a>b);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}
