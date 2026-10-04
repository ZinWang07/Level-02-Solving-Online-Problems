#include <iostream>
#include <string>
using namespace std;

int sol()
{
    int n,x=0; cin>>n;
    string s;

    while(n--)
    {
        cin>>s;
        if((s=="++X") || (s=="X++")) ++x;
        else --x;
    }

    return x;
}

int main()
{
    cout<<sol()<<'\n';
    return 0;
}

