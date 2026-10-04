#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char grid[1005][1005];

void dfs(int x, int y)
{
    grid[x][y] = '#';

    for(int k = 0; k < 4; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
        else if(grid[nx][ny]=='.') dfs(nx,ny);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>grid[i][j];

    ll rooms = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(grid[i][j]=='.')
            {
                rooms++;
                dfs(i,j);
            }
    cout<<rooms;
    return 0;
}
