#include <iostream>
using namespace std;
bool check()
{
    int n; cin>>n;
    if(n%3==0) return false;
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}
