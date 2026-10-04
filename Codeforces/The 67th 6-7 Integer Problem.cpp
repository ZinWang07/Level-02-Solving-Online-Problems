#include <iostream>
using namespace std;
int main()
{
    int A[7];
    int t,cao,ans; cin>>t;
    while(t--)
    {
        cao = -68; ans = 0;
        for(int i = 0; i < 7; i++)
        {
            cin>>A[i];
            if(A[i]>cao) cao = A[i];
        }
        for(int i = 0; i < 7; i++)
            if(A[i]==cao)
            {
                A[i] = 0;
                break;
            }
        for(int i = 0; i < 7; i++) ans += A[i]*(-1);
        cout<<ans+cao<<'\n';
    }
    return 0;
}
