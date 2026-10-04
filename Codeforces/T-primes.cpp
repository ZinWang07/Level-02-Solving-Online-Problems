#include <iostream>
#include <math.h>
using namespace std;
bool is_tprime(long long x)
{
    if(x<4) return false;
    int cnt=1;
    long long left=0,right=x;
    while(left<=right)
    {
        long long mid = (left+right)/2;
    }
    if(cnt+1==3) return true;
    return false;
}
int main()
{
    int n; cin>>n;
    long long x;
    while(n--)
    {
        cin>>x;
        if(is_tprime(x)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
