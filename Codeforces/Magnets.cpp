#include <iostream>
#include <string>
using namespace std;
int sol()
{
    int n,ans=0; cin>>n;
    string s,prev; cin>>prev; n--;

    while(n--)
    {
        cin>>s;
        if(s!=prev) ++ans;
        prev=s;
    }

    return ans+1;
}
int main()
{
    cout<<sol();
    return 0;
}
