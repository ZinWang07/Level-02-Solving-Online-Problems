#include <iostream>
using namespace std;
int process()
{
    int n; cin>>n;

    if(n<=1399) return 4;
    if((1400<=n) && (n<=1599)) return 3;
    if((1600<=n) && (n<=1899)) return 2;
    if(1900<=n) return 1;
}
int main()
{
    int t,elo; cin>>t;
    while(t--)
    {
        elo = process();
        if(elo == 4) cout<<"Division 4\n";
        else if(elo == 3) cout<<"Division 3\n";
        else if(elo == 2) cout<<"Division 2\n";
        else cout<<"Division 1\n";
    }
    return 0;
}
