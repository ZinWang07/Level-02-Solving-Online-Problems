#include <iostream>
#include <string>
using namespace std;
int sol()
{
    int ans = 0,n; cin>>n; getchar();
    string s; cin>>s;
    for(int i=0;i<(int)s.size();i++)
    {
        if(abs('a' - s[i])+1 > ans) ans = abs('a' - s[i])+1;
    }
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
