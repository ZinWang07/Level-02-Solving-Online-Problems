#include <iostream>
#include <math.h>
using namespace std;
bool is_prime(int x)
{
    for(int i=2;i<=(int) sqrt(x);++i)
    {
        if(x%i==0) return false;
    }
    return true;
}
bool check()
{
    int n,m,cnt=0; cin>>n>>m;

    for(int i=n+1; i<=m; ++i)
    {
        if(is_prime(i)) ++cnt;
    }

    if(cnt==1 && is_prime(m)) return true;
    else return false;
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
