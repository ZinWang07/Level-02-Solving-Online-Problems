#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
string sol()
{
    string s,ans; cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);

    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='o' && s[i]!='u' && s[i]!='i' && s[i]!='y')
        {
            ans+=".";
            ans+=s[i];
        }
        i++;
    }
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
