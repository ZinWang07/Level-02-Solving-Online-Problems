#include <iostream>
using namespace std;
int sol()
{
    long long A[4]; int ans=0;
    for(int i=0;i<=3;++i) cin>>A[i];

    for(int i=0;i<=2;++i)
        for(int j=i+1;j<=3;++j)
            if(A[i]==A[j]) ++ans;

    if(ans==6) return 3;
    if(ans==3) return 2;
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
