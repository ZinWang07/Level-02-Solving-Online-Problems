#include <iostream>
using namespace std;
int main()
{
    int x,ans=0; cin>>x;
    while(x!=0)
    {
        if(x>=0 && x<=4)
        {
            ans++;
            x-=x;
        }
        else if(x%5>=0 && x%5<=4)
        {
            ans+=x/5;
            x%=5;
        }
        else if(x%4>=0 && x%4<=3)
        {
            ans+=x/4;
            x%=4;
        }
        else if(x%3>=0 && x%3<=2)
        {
            ans+=x/3;
            x%=3;
        }
        else if(x%2>=0 && x%2<=1)
        {
            ans+=x/2;
            x%=2;
        }
    }
    cout<<ans;
    return 0;
}
