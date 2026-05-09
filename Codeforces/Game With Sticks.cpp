#include <iostream>
#include <algorithm>
using namespace std;
bool check()
{
    int n,m; cin>>n>>m;
    if(n>m) swap(n,m);
    if(n%2==0) return false;
    else return true;
}
int main()
{
    if(check()) cout<<"Akshat";
    else cout<<"Malvika";
    return 0;
}
