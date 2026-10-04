#include <iostream>
#include <string.h>
using namespace std;
void process()
{
    int h,m; char c; cin>>h>>c>>m;
    if(h<12)
    {
        if(h==0) h=12;
        if(h<10)
            if(m<10)
                cout<<'0'<<h<<c<<'0'<<m<<" AM\n";
            else
                cout<<'0'<<h<<c<<m<<" AM\n";
        else
            if(m<10)
                cout<<h<<c<<'0'<<m<<" AM\n";
            else
                cout<<h<<c<<m<<" AM\n";
    }
    else
    {
        int pm = abs(12-h);
        if(h==12) pm=12;
        if(pm<10)
            if(m<10)
                cout<<'0'<<pm<<c<<'0'<<m<<" PM\n";
            else
                cout<<'0'<<pm<<c<<m<<" PM\n";
        else
            if(m<10)
                cout<<pm<<c<<'0'<<m<<" PM\n";
            else
                cout<<pm<<c<<m<<" PM\n";
    }
}
int main()
{
    int t; cin>>t;
    while(t--) process();
    return 0;
}
