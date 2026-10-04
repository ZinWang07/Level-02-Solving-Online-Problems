#include <bits/stdc++.h>
using namespace std;
bool check()
{
    int n,open=0; cin >> n;
    string a, b; cin >> a >> b;

    for(int i=0;i<n;i++)
    {
        if(a[i]=='(') open++;
        if(b[i]=='(') open++;
    }
    if(open<n || open>n){
        return false;
    }

    int onow=0; bool ok=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='(') onow++;
        if(b[i]=='(') onow++;
        if(onow<((i+1)%2==0?i+1:i+2))
        {
            ok = false;
            break;
        }
    }
    return ok;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
