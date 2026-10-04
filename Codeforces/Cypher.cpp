#include <iostream>
using namespace std;
void process()
{
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    for(int i=0;i<n;i++)
    {
        int tmp; cin>>tmp; getchar();
        for(int j=0;j<tmp;j++)
        {
            char c; cin>>c;
            if(c=='U')
                if(A[i]==0) A[i]=9;
                else A[i]--;
            else
                if(A[i]==9) A[i]=0;
                else A[i]++;
        }
    }
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        process();
        cout<<'\n';
    }
    return 0;
}
