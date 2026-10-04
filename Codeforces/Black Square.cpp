#include <iostream>
using namespace std;
long long sol()
{
    int a,b,c,d,i=0; cin>>a>>b>>c>>d;
    long long ans=0;
    string s; cin>>s;

    while(s[i]!='\0')
    {
        if(s[i]=='1') ans+=a;
        else if(s[i]=='2') ans+=b;
        else if(s[i]=='3') ans+=c;
        else ans+=d;
        i++;
    }

    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
