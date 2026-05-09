#include <iostream>
#include <string>
using namespace std;
int sol()
{
    int n,ans=0; cin>>n;
    while(n--)
    {
        string s; cin>>s;
        if(s=="Tetrahedron") ans+=4;
        if(s=="Cube") ans+=6;
        if(s=="Octahedron") ans+=8;
        if(s=="Dodecahedron") ans+=12;
        if(s=="Icosahedron") ans+=20;
    }
    return ans;
}
int main()
{
    cout<<sol()<<"\n";
    return 0;
}
