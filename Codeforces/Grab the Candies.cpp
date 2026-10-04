#include <iostream>
using namespace std;
bool check()
{
    int n; cin>>n;
    int tmp,cnt_even=0,sum_even=0,cnt_le=0,sum_le=0;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp%2==0)
        {
            cnt_even++;
            sum_even+=tmp;
        }
        else
        {
            cnt_le++;
            sum_le+=tmp;
        }
    }

    if(cnt_le>cnt_even)
    {
        if(sum_le<sum_even) return true;
        return false;
    }
    else
    {
        if(sum_le<sum_even) return true;
        return false;
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
