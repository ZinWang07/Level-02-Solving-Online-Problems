#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b; cin>>a>>b;
    long long i=0;
    long long c1 = stoll(a) + stoll(b);
    string c = to_string(c1);

    while(a[i]!='\0')
    {
        if(a[i]=='0') a.erase(i,1);
        else i++;
    }

    i=0;
    while(b[i]!='\0')
    {
        if(b[i]=='0') b.erase(i,1);
        else i++;
    }

    i=0;
    while(c[i]!='\0')
    {
        if(c[i]=='0') c.erase(i,1);
        else i++;
    }

    long long c2 = stoll(a) + stoll(b);

    if(stoll(c)==c2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
