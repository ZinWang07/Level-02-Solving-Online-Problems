#include <iostream>
#include <algorithm>
using namespace std;
void sol()
{
    int y,w,ans=0; cin>>y>>w;
    int highest = max(y,w);
    for(int i = highest; i <= 6; ++i) ++ans;

    if(ans==0) cout<<"0/1";
    if(ans==1) cout<<"1/6";
    if(ans==2) cout<<"1/3";
    if(ans==3) cout<<"1/2";
    if(ans==4) cout<<"2/3";
    if(ans==5) cout<<"5/6";
    if(ans==6) cout<<"1/1";
}
int main()
{
    sol();
    return 0;
}
