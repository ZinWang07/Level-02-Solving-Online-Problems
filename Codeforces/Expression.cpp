#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int a,b,c; cin>>a>>b>>c;
    return max({a+b+c,(a+b)*c,a*(b+c),a*b*c,a+b*c,a*b+c});
}
int main()
{
    cout<<sol();
    return 0;
}
