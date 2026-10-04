#include <iostream>
using namespace std;
double sol()
{
    int n,tmp,total; double ans=0; cin>>n;
    total=n;
    while(n--)
    {
        cin>>tmp;
        ans+=tmp;
    }

    return ans/total;
}
int main()
{
    cout<<sol();
    return 0;
}

