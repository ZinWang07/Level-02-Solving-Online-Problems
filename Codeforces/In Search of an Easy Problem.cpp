#include <iostream>
using namespace std;
bool check()
{
    int n,tmp; cin>>n;

    while(n--)
    {
        cin>>tmp;
        if(tmp==1) return true;
    }

    return false;
}
int main()
{
    if(check()) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}
