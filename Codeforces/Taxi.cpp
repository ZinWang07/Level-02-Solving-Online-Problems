#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int n,ans=0; cin>>n;
    int cnt[5]={0};
    for(int i=0;i<n;i++)
    {
        int tmp; cin>>tmp;
        cnt[tmp]++;
    }

    ans+=cnt[4];
    ans+=cnt[3];
    cnt[1]-=min(cnt[1],cnt[3]);

    ans+=cnt[2]/2;
    if(cnt[2]%2!=0)
    {
        ans++;
        cnt[1]-=min(cnt[1],2);
    }
    ans+=(cnt[1]+3)/4;
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
