#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long sol()
{
    int n; cin>>n; long long ans,o=0;
    vector<long long> A;
    for(int i=0;i<n;i++)
    {
        long long tmp; cin>>tmp;
        if(tmp==1) o++;
        else A.push_back(tmp);
    }

    if(A.empty()) return 0;
    else if((long long) A.size()==1)
    {
        long long lonnhat = A[0];
        ans = lonnhat + min(o,lonnhat/2);
    }
    else
    {
        long long sum=0,sumhold=0;
        for(long long c: A)
        {
            sum+=c;
            sumhold+=(c-2)/2;
        }
        ans = sum+min(o,sumhold);
    }
    if(ans<3) return 0;
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--) cout<<sol()<<'\n';
    return 0;
}
