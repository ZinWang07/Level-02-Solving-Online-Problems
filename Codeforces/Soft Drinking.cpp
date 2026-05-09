#include <iostream>
#include <algorithm>
using namespace std;

int sol()
{
    int n,k,l,c,d,p,nl,np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int litre = k*l, slice = c*d, ans = p/np;

    ans = min(ans,min(slice,litre/nl));

    return ans/n;
}
int main()
{
    cout<<sol();
    return 0;
}
