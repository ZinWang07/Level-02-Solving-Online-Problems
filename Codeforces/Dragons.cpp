#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check()
{
    int s,n; cin>>s>>n;
    vector<pair<int,int>> A;
    for(int i=0;i<n;i++)
    {
        int key,val; cin>>key>>val;
        A.push_back({key,val});
    }
    sort(A.begin(),A.end());

    for(auto p: A)
    {
        if(s>p.first) s+=p.second;
        else return false;
    }
    return true;
}
int main()
{
    if(check()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
