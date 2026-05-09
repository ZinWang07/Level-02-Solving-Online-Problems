#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void process()
{
    string s; cin>>s;
    int i=1;
    bool ok = true;
    while(s[i]!='\0')
    {
        if(islower(s[i])) ok = false;
        i++;
    }

    if(ok)
    {
        while(s[i]!='\0')
        {
            if(isupper(s[i])) s[i]+=32;
            i++;
        }
    }
    cout<<s;
}
int main()
{
    process();
    return 0;
}
