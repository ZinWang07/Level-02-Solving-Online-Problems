#include <iostream>
#include <string>
using namespace std;
int sol()
{
    int n,m,cnt=0; cin>>n>>m;
    string x,s; cin>>x>>s;

    while(x.length()*2 < 256)
    {
        if(x.find(s)!=string::npos) return cnt;
        cnt++;
        x+=x;
    }

    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
