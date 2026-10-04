#include <iostream>
using namespace std;
int win(int a, int b, int c, int d)
{
    int sun = 0, sla = 0;

    if(a>c) sun++;
    else if(a<c) sla++;

    if(b>d) sun++;
    else if(b<d) sla++;

    return sun>sla;
}
int sol()
{
    int sun1,sun2,sla1,sla2; cin>>sun1>>sun2>>sla1>>sla2;
    int ans = 0;

    ans += win(sun1,sun2,sla1,sla2);
    ans += win(sun1,sun2,sla2,sla1);
    ans += win(sun2,sun1,sla1,sla2);
    ans += win(sun2,sun1,sla2,sla1);

    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
