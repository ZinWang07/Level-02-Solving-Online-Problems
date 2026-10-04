#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check()
{
    int highest, high2, semi1, semi2;
    vector<int> A(5),B(5);
    for(int i=1;i<=4;++i)
    {
        cin>>A[i];
        B[i]=A[i];
    }
    sort(B.begin(),B.end());
    highest = B[4]; high2 = B[3];

    semi1 = max(A[1],A[2]);
    semi2 = max(A[3],A[4]);
    if(semi1<semi2) swap(semi1,semi2);

    return (semi1 == highest && semi2 == high2);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
