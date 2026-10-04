#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int sol()
{
    string s; cin>>s;
    int ans=0,so2=0;
    for(char c: s)
    {
        if(c=='4') ans++;
        else if(c=='2') so2++;
    }

    int best = so2, so1_3=0;
    for(char c: s)
    {
        if(c=='2') so2--;
        else if(c=='1' || c=='3') so1_3++;
        best = min(best,so1_3+so2);
    }
    return ans+best;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
