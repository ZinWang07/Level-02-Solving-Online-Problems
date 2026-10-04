#include <iostream>
#include <algorithm>
using namespace std;
int sol()
{
    int a,b,cnt=0,len; cin>>a>>b;
    if(a>b) swap(a,b);

    while(a!=b)
    {
        len=b-a;
        if(len>=10)
        {
            a+=(len/10)*10;
            cnt+=len/10;
        }
        else
        {
            a+=len;
            ++cnt;
        }
    }

    return cnt;
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
