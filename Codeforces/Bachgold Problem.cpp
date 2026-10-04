#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
bool check(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return false;
    return true;
}
void sol()
{
    int n; cin>>n;
    bool A[n]={false};
    vector<int> ans;
    for(int i=2;i<=n;i++)
    {
        if(check(i)) A[i] = true;
    }

    int i=2;
    while(n-i>=0)
    {
        if(A[n])
        ans.push_back(i);
        n-=i;
        if((n-i)%i!=0) i++;
        else n-=i;
    }

    cout<<ans.size()<<'\n';
    for(int x: ans) cout<<x<<" ";
    cout<<'\n';
}
int main()
{
    sol();
    return 0;
}
