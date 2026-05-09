#include <iostream>
using namespace std;
bool check(int x, int y, int z)
{
    return ((x + y > z) && (x + z > y) && (y + z > x));
}
bool check1(int x, int y, int z)
{
    return ((x+y==z) || (x+z==y) || (y+z==x));
}
int main()
{
    int a,b,c,d; cin>>a>>b>>c>>d;
    if(check(a,b,c) || check(a,b,d) || check(a,c,d) || check(b,c,d)) cout<<"TRIANGLE";
    else if(check1(a,b,c) || check1(a,b,d) || check1(a,c,d) || check1(b,c,d)) cout<<"SEGMENT";
    else cout<<"IMPOSSIBLE";
    return 0;
}
