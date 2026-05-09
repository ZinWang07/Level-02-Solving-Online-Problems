#include <iostream>
using namespace std;
int sol()
{
    long long a,b; cin>>a>>b;

    if(a<b) return b-a;
    if(a%b==0) return 0;

    int remain=a%b, tmp = b - remain;
    if((a+remain)%b==0) return remain;
    else return tmp;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
