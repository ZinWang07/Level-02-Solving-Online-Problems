#include <iostream>
using namespace std;
void process()
{
    int x,y; cin>>x>>y;
    if(x<y) cout<<x<<' '<<y<<'\n';
    else cout<<y<<' '<<x<<'\n';
}
int main()
{
    int t; cin>>t;
    while(t--) process();
    return 0;
}
