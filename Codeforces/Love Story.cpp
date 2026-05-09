#include <iostream>
#include <string>
using namespace std;
int sol()
{
    string s,pro = "codeforces"; cin>>s;
    int ans=0,i=0,n = s.length();
    while(i<n)
    {
        if(s[i]!=pro[i]) {++ans;}
        ++i;
    }
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<"\n";
    }
    return 0;
}
