#include <iostream>
using namespace std;
int sol()
{
    int n,ans=0,lived,cap,space; cin>>n;

    while(n--)
    {
        cin>>lived>>cap;
        space = cap - lived;

        if(space>=2) ++ans;
    }

    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
