#include <iostream>
using namespace std;
int sol()
{
    int n,smallest=7,highest=0; cin>>n;
    for(int i=0;i<n;i++)
    {
        int tmp; cin>>tmp;
        if(tmp<smallest) smallest=tmp;
        if(tmp>highest) highest=tmp;
    }

    return highest+1-smallest;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
