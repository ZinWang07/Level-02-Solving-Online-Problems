#include <iostream>
using namespace std;
bool check()
{
    int n; cin>>n;
    long long sx=0,sy=0,sz=0;

    while(n--)
    {
        int x,y,z; cin>>x>>y>>z;
        sx+=x; sy+=y; sz+=z;
    }

    return (sx==0) && (sy==0) && (sz==0);
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
