#include <iostream>
#include <string>
using namespace std;
bool check()
{
    string s; cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') return true;
        i++;
    }
    return false;
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
