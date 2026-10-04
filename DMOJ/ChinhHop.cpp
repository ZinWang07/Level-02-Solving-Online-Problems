#include <bits/stdc++.h>
using namespace std;

int n,k;
int x[10];
bool used[10] = {false};

void print()
{
    for(int i = 1; i <= k ; i++) cout<<x[i]<<" ";
    cout<<'\n';
}

void QL(int i)
{
    for(int v = 1; v <= n; v++)
        if(!used[v])
        {
            x[i] = v;
            used[v] = true;
            if(i==k) print();
            else QL(i+1);
            used[v] = false;
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
