#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;
    if(a==0)
    {
        if(b==0) cout<<"INFINITE SOLUTIONS";
        else cout<<"NO SOLUTION";
    }
    else
    {
        if(b%a!=0) cout<<"NO SOLUTION";
        else cout<<(-b)/a;
    }
    return 0;
}
