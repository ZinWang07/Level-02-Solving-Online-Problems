#include <bits/stdc++.h>
using namespace std;
const int N = 15;
char x[N];
int n;

void print()
{
    for(int i = 1; i <= n; i++) cout<<x[i];
    cout<<'\n';
}

void backtrack(int i)
{
    for(char c = 'A'; c <= 'C'; c++)
    {
        if(i == 1 || c!=x[i-1])
        {
            x[i] = c;
            if(i==n) print();
            else backtrack(i+1);
        }
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
