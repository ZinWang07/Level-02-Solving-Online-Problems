#include <iostream>
using namespace std;
int n,p,q;
bool sol()
{
    cin>>n>>p;
    int A[n+5]={0};
    int tmp;

    while(p--)
    {
        cin>>tmp;
        A[tmp]++;
    }

    cin>>q;

    while(q--)
    {
        cin>>tmp;
        A[tmp]++;
    }
    for(int i=1;i<=n;++i)
    {
        if(A[i]==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    if(sol()) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}
