#include <iostream>
using namespace std;
int sol()
{
    int n,ans=1,best_qual=0; cin>>n;
    for(int i=1;i<=n;i++)
    {
        int len,qual; cin>>len>>qual;
        if(len<=10)
            if(qual>best_qual)
            {
                ans=i;
                best_qual = qual;
            }
    }
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
