#include <bits/stdc++.h>
using namespace std;

struct Condition{
    int u,v,sum;
} dk[10];

int n, m, q, ans = 0;
int A[10];

void QL(int i)
{
    if(i>n)
    {
        ans++;
        return;
    }

    for(int v = 1; v <= m; v++)
    {
        A[i] = v;
        bool valid = true;
        for(int c = 0; c < q; c++)
            if(dk[c].u <= i && dk[c].v <= i)
                if(A[dk[c].u] + A[dk[c].v] != dk[c].sum)
                {
                    valid = false;
                    break;
                }

        if(valid) QL(i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m>>q;
    for(int c = 0; c < q; c++) cin>>dk[c].u>>dk[c].v>>dk[c].sum;

    QL(1);
    cout<<ans;

    return 0;
}
