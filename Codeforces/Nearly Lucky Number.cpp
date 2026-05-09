#include <iostream>
using namespace std;

void sol()
{
    long long n,cnt=0; cin>>n;
    int digit;

    while(n!=0)
    {
        digit=n%10;
        if((digit==4) || (digit==7)) ++cnt;
        n/=10;
    }

    if((cnt==4) || (cnt==7)) cout<<"YES";
    else cout<<"NO";
    return;
}

int main()
{
    sol();
    return 0;
}

