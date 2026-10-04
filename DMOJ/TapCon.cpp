#include <bits/stdc++.h>
using namespace std;

int n,k;
int x[30];

void print()
{
    for(int i = 1; i <= k; i++) cout<<x[i]<<" ";
    cout<<'\n';
}

void QL(int i)
{
    for(int v = x[i-1]+1; v <= n; v++)
    {
        x[i] = v;
        if(i==k) print();
        else QL(i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>k;
    QL(1);

    return 0;
}
