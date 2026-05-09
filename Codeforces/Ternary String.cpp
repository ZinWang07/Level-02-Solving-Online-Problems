#include <iostream>
#include <string>
#include <climits>
using namespace std;
int sol()
{
    string s,window=""; cin>>s;
    int n = s.size();

    int left=0,ans=INT_MAX,cnt[4]={0};
    for(int right=0;right<n;right++)
    {
        cnt[s[right] - '0']++;

        while(cnt[1]>0 && cnt[2]>0 && cnt[3]>0)
        {
            ans = min(ans,right-left+1);
            cnt[s[left] - '0']--;
            left++;
        }
    }

    if(ans==INT_MAX) return 0;
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
