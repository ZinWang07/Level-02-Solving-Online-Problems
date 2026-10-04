#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n,k; cin>>n>>k;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];

    if(k==2)
    {
        for(int a: A)
        {
            if(a%2==0) return 0;
        }
        return 1;
    }
    else if(k==3)
    {
        int remain=0;
        for(int a: A)
        {
            remain = max(remain,a%3);
        }
        if(remain==0) return 0;
        else if(remain==1) return 2;
        return 1;
    }
    else if(k==4)
    {
        int even=0,ans=3;
        for(int a: A)
        {
            if(a%2==0) even++;
            if(a%4==0) ans = min(ans,0);
            else if(a%4==1) ans = min(ans,3);
            else if (a % 4 == 2) ans = min(ans, 2);
            else ans = min(ans, 1);
        }
        if(even >= 2) ans = min(ans, 0);
        else if (even == 1) ans = min(ans, 1);
        else ans = min(ans, 2);
        return ans;
    }
    else
    {
        int remain=0;
        for(int a: A)
        {
            if(a%k==0) return 0;
            else remain=max(remain,a%k);
        }
        return k - remain;
    }
    return 0;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
