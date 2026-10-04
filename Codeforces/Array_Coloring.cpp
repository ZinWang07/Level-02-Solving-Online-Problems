#include <iostream>
using namespace std;

bool sol()
{
    int n; cin>>n;
    if(n<2) return false;
    int tmp,color1=0,color2=0;
    for(int i=1;i<=n;++i)
    {
        cin>>tmp;
        if(tmp%2==0) color1+=tmp;
        else color2+=tmp;
    }
    if((color1%2==0) && (color2%2==0)) return true;
    return false;
}

int main()
{
    int t; cin>>t;

    while(t--)
    {
        if(sol()) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
