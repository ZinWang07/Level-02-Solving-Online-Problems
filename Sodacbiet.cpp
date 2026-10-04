#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool is_prime[31623];
vector<ll> A;
void seive()
{
    int n=31623;
    A.resize(n);
    for(int i=2;i<=n;++i) is_prime[i]=true;
    for(int i=2;i*i<=n;++i)
        if(is_prime[i])
            for(int j=i*i;j<=n;j+=i) is_prime[j]=false;
    for(int i=2;i<=n;++i)
        if(is_prime[i])
        {
            A.push_back(1LL*i*i);
        }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream f1 ("SDB.INP");
    ofstream f2 ("SDB.OUT");

    int n,tmp; f1 >> n;
    seive();
    for(int i=0;i<n;++i)
    {
        f1>>tmp;
        auto ans=lower_bound(A.begin(),A.end(),tmp);
        f2<<*ans<<" ";
    }
    f1.close();
    f2.close();
    return 0;
}
