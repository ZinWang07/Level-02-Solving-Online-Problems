#include <iostream>
using namespace std;
int main()
{
    int t,n,low,high; cin>>t;
    while(t--)
    {
        cin>>n;
        low = 1; high = 3*n;
        for(int i = 0; i < n; i++)
        {
            cout<<low<<" "<<high-1<<" "<<high<<" ";
            low++;
            high-=2;
        }
        cout<<'\n';
    }
    return 0;
}
