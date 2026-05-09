#include <iostream>
using namespace std;
bool check()
{
    int n,cnt1=0,cnt2=0,total=0; cin>>n;
    for(int i=0;i<n;++i)
    {
        int tmp; cin>>tmp;
        if(tmp==1) ++cnt1;
        else ++cnt2;
        total+=tmp;
    }

    if((total)%2!=0) return false;
    else if(((total/2)%2==0) || ((total/2)%2==1 && cnt1!=0)) return true;
    return false;
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
