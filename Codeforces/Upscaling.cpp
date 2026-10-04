#include <iostream>
using namespace std;
void process()
{
    int n,cntl=0,cntc=0,cntc_d=0; cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        if(cntl<2) cntc=0;
        else if(cntl==4)
        {
            cntl=0;
            cntc=0;
        }
        else cntc=2;
        for(int j=1;j<=2*n;j++)
        {
            if(cntc<2)
            {
                cntc++;
                cout<<"#";
            }
            else
            {
                cntc_d++;
                cout<<".";
            }
            if(cntc_d==2)
            {
                cntc=0;
                cntc_d=0;
            }
        }
        cntl++;
        cout<<'\n';
    }
}
int main()
{
    int t; cin>>t;
    while(t--) process();
    return 0;
}
