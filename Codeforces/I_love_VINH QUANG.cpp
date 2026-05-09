#include <iostream>
using namespace std;
int sol()
{
    int n,tmp,ans=0; cin>>n>>tmp; n--;
    int minp = tmp, maxp = tmp;

    while(n--)
    {
        cin>>tmp;
        if(tmp>minp)
        {
            minp=tmp;
            ++ans;
        }
        if(tmp<maxp)
        {
            maxp=tmp;
            ++ans;
        }
    }

    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
