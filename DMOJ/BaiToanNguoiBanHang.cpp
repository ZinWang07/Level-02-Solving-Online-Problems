#include <bits/stdc++.h>
using namespace std;

int n, min_cost = 1e9;
int A[15][15];
bool visited[15];

void QL(int cur_city, int i, int cur_cost)
{
    if(cur_cost >= min_cost) return;
    if(i==n)
    {
        min_cost = min(min_cost, cur_cost + A[cur_city][1]);
        return;
    }

    for(int next = 1; next <= n; next++)
        if(!visited[next])
        {
            visited[next] = true;
            QL(next,i+1,cur_cost + A[cur_city][next]);
            visited[next] = false;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin>>A[i][j];

    visited[1] = true;
    QL(1,1,0);

    cout<<min_cost;
    return 0;
}
