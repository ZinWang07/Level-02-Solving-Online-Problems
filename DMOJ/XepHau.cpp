#include <bits/stdc++.h>
using namespace std;

int n;
long long ans = 0;
bool col[20] = {false};
bool diag1[30] = {false};
bool diag2[30] = {false};

void QL(int i)
{
    for(int j = 1; j <= n; j++)
        if(!col[j] && !diag1[i-j+n] && !diag2[i+j])
        {
            col[j] = true;
            diag1[i-j+n] = true;
            diag2[i+j] = true;

            if(i==n) ans++;
            else QL(i+1);

            col[j] = false;
            diag1[i-j+n] = false;
            diag2[i+j] = false;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    QL(1);
    cout<<ans;

    return 0;
}
