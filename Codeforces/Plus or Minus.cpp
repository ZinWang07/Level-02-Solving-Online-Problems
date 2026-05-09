#include <iostream>
using namespace std;
bool check(int a,int b,int c)
{
    return (a+b==c);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        if(check(a,b,c)) cout<<"+\n";
        else cout<<"-\n";
    }
    return 0;
}
