#include <iostream>
using namespace std;
int sol()
{
    int n,m; cin>>n>>m;
    return n + (n-1)/(m-1);
}
int main()
{
    cout<<sol();
    return 0;
}
