#include <iostream>
#include <string>
using namespace std;
void sol()
{
    char letter; cin>>letter;
    string s; cin>>s;
    string line1 = "qwertyuiop";
    string line2 = "asdfghjkl;";
    string line3 = "zxcvbnm,./";

    int i=0,pos;
    if(letter=='L') pos=1;
    else pos=-1;

    while(s[i]!='\0')
    {
        if(line1.find(s[i]) != string::npos) cout<<line1[line1.find(s[i])+pos];
        else if(line2.find(s[i]) != string::npos) cout<<line2[line2.find(s[i])+pos];
        else cout<<line3[line3.find(s[i])+pos];
        i++;
    }
}
int main()
{
    sol();
    return 0;
}
