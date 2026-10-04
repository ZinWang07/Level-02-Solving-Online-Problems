#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check()
{
    string s,t; cin>>s>>t;
    reverse(s.begin(),s.end());

    return s==t;
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
