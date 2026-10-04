#include <iostream>
using namespace std;
void process()
{
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    int i=0,j=n-1;
    while(i<=j)
    {
        if(i==j)
        {
            cout<<A[i];
            break;
        }
        cout<<A[i]<<" ";
        i++;
        cout<<A[j]<<" ";
        j--;
    }
    cout<<'\n';
    return;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        process();
    }
    return 0;
}
