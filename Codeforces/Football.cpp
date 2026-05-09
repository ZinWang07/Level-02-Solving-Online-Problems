#include <iostream>
#include <string>
using namespace std;
bool check()
{
    string s; cin>>s;
    char tmp = s[0];
    int i=1,cnt=1;
    while(s[i]!='\0')
    {
        if(s[i]==s[i-1])
        {
            cnt++;
            if(cnt>=7) return true;
        }
        else cnt=1;

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
