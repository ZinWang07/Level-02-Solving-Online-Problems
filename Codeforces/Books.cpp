#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n,t,ans=0,left=0; cin>>n>>t;
    long long sum=0;
    vector<int> A(n),window;
    for(int i=0;i<n;++i) cin>>A[i];

    for(int right=0;right<n;right++)
    {
        window.push_back(A[right]);
        sum+=A[right];
        while(sum>t)
        {
            sum-=A[left];
            window.erase(window.begin());
            left++;
        }
        ans = max(ans,(int) window.size());
    }
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
