#include <iostream>
#include <string>
using namespace std;
string sol()
{
    int n,team1=0,team2=0; cin>>n;
    string s,s1,s2; cin>>s1; team1++; n--;

    while(n--)
    {
        cin>>s;
        if(s1==s) team1++;
        else if(s2.empty())
        {
            s2 = s;
            team2++;
        }
        else team2++;
    }

    if(team1>team2) return s1;
    return s2;
}
int main()
{
    cout<<sol();
    return 0;
}
