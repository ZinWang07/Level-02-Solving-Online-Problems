#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check()
{
    string a,b,c; cin>>a>>b>>c;
    string d = a+b;
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());

    return (d==c);
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
