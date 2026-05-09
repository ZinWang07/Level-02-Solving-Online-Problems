#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string sol()
{
    int n,t,i=0; cin>>n>>t;
    string s; cin>>s;

    while(t>0)
    {
        if(s[i]=='B' && s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i+=2;
        }
        else i++;
        if(i>n-1)
        {
            i=0;
            t--;
        }
    }

    return s;
}
int main()
{
    cout<<sol();
    return 0;
}
