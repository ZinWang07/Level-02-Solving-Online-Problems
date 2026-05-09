#include <iostream>
#include <vector>
using namespace std;
void sol()
{
    int n; cin>>n;
    vector<long long> A,B,C,D;
    for(int i=0;i<n;i++)
    {
        long long tmp; cin>>tmp;
        if(tmp%6==0) A.push_back(tmp);
        else if(tmp%2==0) B.push_back(tmp);
        else if(tmp%3==0) C.push_back(tmp);
        else D.push_back(tmp);
    }

    for(long long x: A) cout<<x<<" ";
    for(long long x: B) cout<<x<<" ";
    for(long long x: D) cout<<x<<" ";
    for(long long x: C) cout<<x<<" ";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
        cout<<'\n';
    }
    return 0;
}
