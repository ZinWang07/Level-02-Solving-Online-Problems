#include <iostream>
using namespace std;
bool check()
{
    int n,m,color=0; cin>>n>>m;
    char c;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='C' || c=='M' || c=='Y') color++;
        }

    return color>0;
}
int main()
{
    if(check()) cout<<"#Color";
    else cout<<"#Black&White";
    return 0;
}
