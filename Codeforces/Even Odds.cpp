#include <iostream>
using namespace std;
long long sol()
{
    long long n,k; cin>>n>>k;
    long long mid = (n/2)+1,ans;

    if(n%2==0)
    {
        if(k>=mid)
        {
            ans = 2 + 2 * (k-mid);
        }
        else
        {
            ans = 1 + 2 * (k-1);
        }
    }
    else
    {
        mid++;
        if(k>=mid)
        {
            ans = 2 + 2 * (k-mid);
        }
        else
        {
            ans = 1 + 2 * (k-1);
        }
    }

    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
