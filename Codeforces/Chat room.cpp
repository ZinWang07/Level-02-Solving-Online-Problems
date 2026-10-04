#include <iostream>
#include <string>
using namespace std;
bool check()
{
    string s; cin>>s;
    string cmp = "hello";
    int i=0,j=0;

    while(s[i]!='\0')
    {
        if(s[i]==cmp[j]) j++;
        if(j==5) break;
        i++;
    }

    if(j==5) return true;
    return false;
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
