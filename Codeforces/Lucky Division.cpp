#include <iostream>
using namespace std;
bool check()
{
    int A[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n; cin>>n;

    for(int i=0;i<14;i++)
    {
        if(n==A[i] || n%A[i]==0) return true;
    }
    return false;
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
