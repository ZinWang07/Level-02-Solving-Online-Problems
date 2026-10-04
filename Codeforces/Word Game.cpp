#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void process()
{
    int n,A[3]={0}; cin>>n; getchar();
    unordered_map<string, vector<int>> mp;
    for(int i=0;i<3;i++)
        for(int j=0;j<n;j++)
        {
            string s; cin>>s;
            mp[s].push_back(i);
        }

    for(const auto& xau: mp)
    {
        if(xau.second.size()==2)
            for(int index: xau.second) A[index]++;
        else if(xau.second.size()==1)
            for(int index: xau.second) A[index]+=3;
    }

    for(int i=0;i<3;i++) cout<<A[i]<<" ";
    cout<<'\n';
}
int main()
{
    int t; cin>>t;
    while(t--) process();
    return 0;
}
