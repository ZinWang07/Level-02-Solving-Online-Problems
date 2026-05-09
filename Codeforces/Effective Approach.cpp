#include <iostream>
#include <map>
using namespace std;
void sol()
{
    int n; cin>>n;
    map<int,int> mp;
    int A[n+1]; long long sum1=0,sum2=0;

    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        mp[A[i]]=i;
    }

    int q; cin>>q;
    for(int i=0;i<q;i++)
    {
        int tmp; cin>>tmp;
        sum1+=mp[tmp];
        sum2+=n-mp[tmp]+1;
    }
    cout<<sum1<<' '<<sum2;
    return;
}
int main()
{
    sol();
    return 0;
}
