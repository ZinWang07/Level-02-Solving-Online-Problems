#include <iostream>
#include <math.h>
using namespace std;
bool is_square(long long n)
{
    long long x = sqrt(n);
    return x*x == n;
}
bool check()
{
    int n; cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int tmp; cin>>tmp;
        sum+=tmp;
    }

    return is_square(sum);
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
