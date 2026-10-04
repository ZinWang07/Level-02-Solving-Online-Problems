#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5+5;
int n,A[N];
ll PS[N]= {0};

void inp()
{
    cin>>n;
    for(int i=1; i<=n; ++i) cin>>A[i];
    return;
}
int sol()
{
    int ans=0,dem=0,i=1,tmp=0,cnt;
    while(dem<=n)
    {
        bool kt=true;
        cnt=0;
        if(A[i]>0)
        {
            PS[cnt++]=A[i];
            for(int j=i+1; j<=n; ++j)
            {
                PS[cnt]=PS[cnt-1]+A[j];
                if(PS[cnt]<0)
                {
                    kt=false;
                    break;
                }
                else
                {
                    tmp++;
                    cnt++;
                }
            }
            if((tmp<n) && (kt))
                for(int j=1; j<i; ++j)
                {
                    PS[cnt]=PS[cnt-1]+A[j];
                    if(PS[cnt]<0)
                    {
                        kt=false;
                        break;
                    }
                    else cnt++;
                }
            if(kt) ans++;
        }
        dem++; i++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    inp();
    cout<<sol();
    return 0;
}
