#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int sol()
{
    int n; cin>>n;
    string s; cin>>s;

    int left=0,right=n-1,ans=n;
    while(left!=right)
    {
        if(ans<0) return 0;
        if((s[left]=='1' && s[right]=='0') || (s[left]=='0' && s[right]=='1'))
        {
            left++;
            right--;
            ans-=2;
        }
        else break;
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
