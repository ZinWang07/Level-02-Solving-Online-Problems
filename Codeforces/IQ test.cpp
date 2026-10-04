#include <iostream>
using namespace std;
int sol()
{
    int n, odd=0,even=0; cin>>n;
    int A[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]%2==0) even++;
        else odd++;
    }

    if(even>odd)
    {
        for(int i=1;i<=n;i++)
            if(A[i]%2!=0) return i;
    }
    for(int i=1;i<=n;i++)
        if(A[i]%2==0) return i;
}
int main()
{
    cout<<sol();
    return 0;
}
