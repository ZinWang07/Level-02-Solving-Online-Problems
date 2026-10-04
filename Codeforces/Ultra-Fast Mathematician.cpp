#include <iostream>
#include <string>
using namespace std;
void sol()
{
    string s1,s2,ans=""; cin>>s1>>s2;
    int n = s1.size();

    for(int i=0;i<n;++i)
    {
        if(s1[i]==s2[i]) ans+='0';
        else ans+='1';
    }

    cout<<ans;
}
int main()
{
    sol();
    return 0;
}
