#include <iostream>
#include <algorithm>
using namespace std;
void sol()
{
    int a,b; cin>>a>>b;
    if(a<b) swap(a,b);

    cout<<b<<" "<<(a-b)/2;
}
int main()
{
    sol();
    return 0;
}
