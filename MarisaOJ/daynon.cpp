#include <iostream>
const int N = 1e9;
using namespace std;
int main()
{
    int n,lon = 0,pos = 0; cin>>n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin>>A[i];
        if(A[i]>lon)
        {
            lon = A[i];
            pos = i;
        }
    }

    bool check = true;
    for(int i = 0; i < pos; i++)
        if(A[i]>=A[i+1]) check = false;
    for(int i = pos+1; i < n; i++)
        if(A[i]>=A[i-1]) check = false;
    if(check) cout<<"YES";
    else cout<<"NO";
    return 0;
}
