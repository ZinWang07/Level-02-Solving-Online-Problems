#include <iostream>
using namespace std;
int main()
{
    int t,n,cnt,mul,ans; cin>>t;
    while(t--)
    {
        cin>>n;
        cnt = 1; mul = 3;
        for(int i = 0; i < n; i++)
        {
            ans = cnt*mul;
            cout<<ans<<" ";
            cnt += 2; mul += 2;
        }
        cout<<'\n';
    }
    return 0;
}
