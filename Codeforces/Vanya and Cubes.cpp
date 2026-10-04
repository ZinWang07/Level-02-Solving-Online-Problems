#include <iostream>
using namespace std;
int sol()
{
    int n,loop=0,curr,total=0; cin>>n;

    for(int i=1;i<=n;i++)
    {
        curr = i * (i+1) / 2;
        if(total + curr > n) break;
        total += curr;
        loop++;
    }

    return loop;
}
int main()
{
    cout<<sol();
    return 0;
}
