#include <iostream>
#include <string>
using namespace std;
char sol()
{
    string s; cin>>s;
    int cntA=0, cntB=0,i=0;

    while(s[i]!='\0')
    {
        if(s[i]=='A') cntA++;
        else cntB++;
        i++;
    }

    return (cntA>cntB) ? 'A' : 'B';
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
