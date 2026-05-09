#include <iostream>
#include <cctype>
#include <map>
using namespace std;
bool check()
{
    int n; cin>>n;
    map<char,int> A; char c;

    while(n--)
    {
        cin>>c;
        if(isupper(c)) c+=32;
        ++A[c];
    }

    for(char i='a';i<='z';++i)
    {
        if(A[i]==0) return false;
    }
    return true;
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
