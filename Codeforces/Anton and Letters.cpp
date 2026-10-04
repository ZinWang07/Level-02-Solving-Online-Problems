#include <iostream>
#include <string>
#include <set>
using namespace std;
int sol()
{
    string s; getline(cin,s);
    int i=0; set<char> st;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z') st.insert(s[i]);
        i++;
    }
    return (int) st.size();
}
int main()
{
    cout<<sol();
    return 0;
}
