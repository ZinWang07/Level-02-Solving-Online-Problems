#include <iostream>
using namespace std;
void sol()
{
    int n,p = 2; cin>>n;
    int k = n/2;
    bool kt[k+5]={false};
    while(p*p<=n)
    {
        if(!kt[p])
            for(int i=p*p;i<=k+5;i+=p)
                kt[i]=true;
        p++;
    }

    if(n%2==0 && kt[k])
    {
        cout<<k<<" "<<k;
        return;
    }

    int left,right;
    if(n%2!=0)
    {
        left = k, right = k+1;
    }
    else
    {
        left = k-1, right = k+1;
    }

    while((left>3) && (right<=k+5))
    {
        if((kt[left]) && (kt[right]) && (left+right==n))
        {
            cout<<left<<" "<<right;
            return;
        }
        else
        {
            for(int i=left-1;i>=0;--i)
                if(kt[i])
                {
                    left=i;
                    break;
                }
            for(int i=right+1;i<=k+5;++i)
                if(kt[i])
                {
                    right=i;
                    break;
                }
        }
        if(kt[n-right]) left = n-right;
    }
}
int main()
{
    sol();
    return 0;
}
