#include <iostream>
using namespace std;
bool check()
{
    int n,cnt_odd=0,cnt_even=0; cin>>n;
    for(int i=0;i<n;++i)
    {
        int tmp; cin>>tmp;
        if(tmp%2==0) cnt_even++;
        else cnt_odd++;
    }

    if(cnt_odd==0) return false;
    if(n%2==0)
    {
        if(cnt_even==0) return false;
        return true;
    }
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
