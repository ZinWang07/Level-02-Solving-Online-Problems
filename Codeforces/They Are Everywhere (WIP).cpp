#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int sol()
{
    int n; cin>>n;
    string s; cin>>s;
    set<char> st(s.begin(),s.end());
    int need = st.size();

    map<char,int> mp;
    int ans=n+1,left=0;
    for(int right=0;right<n;right++)
    {
        mp[s[right]]++;
        while((int) mp.size()==need)
        {
            ans = min(ans,right-left+1);
            mp[s[left]]--;
            if(mp[s[left]]==0) mp.erase(s[left]);
            left++;
        }
    }
    return ans;
}
int main()
{
    cout<<sol();
    return 0;
}
