#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,a,b,c;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        ll S = a + b + c, cycle = n / S, days = cycle * 3, rem = n % S;

        if(rem==0)
        {
            cout<<days<<'\n';
            continue;
        }

        if(rem<=a) days+=1;
        else if(rem<=a+b) days+=2;
        else days+=3;
        cout<<days<<'\n';
    }
    return 0;
}
