#include <iostream>
#include <string>
using namespace std;
string sol()
{
    string s = "";
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {
            char c; cin>>c;
            if(c>='a' && c<='z') s+=c;
        }
    return s;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
