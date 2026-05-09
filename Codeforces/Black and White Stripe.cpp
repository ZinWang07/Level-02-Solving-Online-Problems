#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int sol()
{
    int n,k,ans=200005; cin>>n>>k;
    string s; cin>>s;

    vector<int> white(n+1);
    white[0] = (s[0]=='W') ? 1 : 0;
    for(int i=1;i<=n;i++) white[i] = white[i-1] + (int) (s[i-1]=='W');

    for(int i=k;i<=n;i++)
    {
        ans = min(ans,white[i]-white[i-k]);
    }
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<sol()<<'\n';
    }
    return 0;
}
