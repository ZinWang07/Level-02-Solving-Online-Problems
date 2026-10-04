#include <iostream>
using namespace std;
int n,tmp;
int sol()
{
    cin>>n;
    int cnt,ans=0;

    while(n--)
    {
        cnt=0;
        for(int i=1;i<=3;++i)
        {
            cin>>tmp;
            if(tmp==1) cnt++;
        }
        if(cnt>=2) ans++;
    }
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
