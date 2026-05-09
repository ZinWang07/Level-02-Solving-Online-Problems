#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int n,ans=0,cnt=0,tmp; cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>tmp;
        if(tmp==0) ++cnt;
        if(tmp==1 || i+1>=n)
        {
            ans = max(ans,cnt);
            cnt=0;
        }
    }

    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
