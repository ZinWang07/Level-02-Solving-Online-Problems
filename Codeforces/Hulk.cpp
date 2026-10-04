#include <iostream>
using namespace std;
void sol()
{
    int n; cin>>n;
    cout<<"I hate";

    for(int i=2;i<=n;++i)
    {
        if(i%2==0) cout<<" that I love";
        else cout<<" that I hate";
    }

    cout<<" it";
}
int main()
{
    sol();
    return 0;
}
