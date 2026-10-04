#include <iostream>
#include <algorithm>
using namespace std;
bool check()
{
    int a,b,c,d; cin>>a>>b>>c>>d;
    bool A[13] = {false};
    if(a>b) swap(a,b);
    if((12-b+1+a)<(b-a))
    {
        for(int i=b;i<=12;i++) A[i]=true;
        for(int i=1;i<=a;i++) A[i]=true;
        if(A[c] && A[d]) return false;
    }
    else if(b-a==6)
    {
        bool B[13] = {false};
        for(int i=a;i<=b;i++) A[i]=true;
        if(A[c] && A[d]) return false;
        for(int i=b;i<=12;i++) B[i]=true;
        for(int i=1;i<=a;i++) B[i]=true;
        if(B[c] && B[d]) return false;
        return true;
    }
    else
    {
        for(int i=a;i<=b;i++) A[i]=true;
        if(A[c] && A[d]) return false;
    }
    return (A[c] || A[d]);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
