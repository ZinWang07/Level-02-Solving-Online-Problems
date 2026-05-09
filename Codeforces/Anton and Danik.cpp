#include <iostream>
#include <string>
using namespace std;
void sol()
{
    int n,Anton=0,Danik=0; cin>>n;
    string s; cin>>s;

    for(int i=0;i<n;++i)
    {
        if(s[i]=='A') ++Anton;
        else ++Danik;
    }

    if(Anton>Danik) cout<<"Anton";
    else if(Danik>Anton) cout<<"Danik";
    else cout<<"Friendship";
}
int main()
{
    sol();
    return 0;
}
