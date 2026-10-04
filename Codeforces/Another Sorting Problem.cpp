#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        long long k=0;
        for (int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                k=max(k,a[i]-a[i+1]);
            }
        }
        if(k==0)
        {
            cout << "YES\n";
            continue;
        }

        int cr=1, ci=1;
        for(int i=0;i<n-1;i++)
        {
            long long dif=a[i+1]-a[i];
            int nr=0, ni=0;
            if(cr)
            {
                if(dif>=0) nr=1;
                ni=1;
            }
            if(ci)
            {
                if(dif>=k) nr=1;
                if(dif>=0) ni=1;
            }
            cr=nr;
            ci=ni;
        }
        if(cr || ci) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
