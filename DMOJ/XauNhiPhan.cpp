#include <bits/stdc++.h>
using namespace std;

const int N = 12;
int n;
int x[N];

void print()
{
    for(int i = 1; i <= n; i++) cout<<x[i];
    cout<<'\n';
}

void backtrack(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i==n) print();
        else backtrack(i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    backtrack(1);
    return 0;
}
