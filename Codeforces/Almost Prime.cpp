#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> A;
bool check(int x)   //check so nguyen to
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0) return false;
    }
    return true;
}
void build(int n)   //xay mang chua cac so nguyen to
{
    for(int i=2;i<=n;++i)
    {
        if(check(i)) A.push_back(i);
    }
}
bool sol(int x)     //check xem so do co nhieu hon 2 uoc so nguyen to hay ko
{
    int cnt=0;
    for(int i=0;i<A.size();i++)
    {
        if(x%A[i]==0) cnt++;
        if(cnt>2) return false;
    }
    return cnt>1;
}
int main()
{
    int n,ans=0; cin>>n;
    if(n<6) cout<<0;    //ko co so nao nho hon 6 thoa man dk
    else
    {
        build(n);
        for(int i=1;i<=n;++i)
        {
            if(sol(i)) ans++;
        }
        cout<<ans;
    }
    return 0;
}
