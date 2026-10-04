#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
const int N = 1005;
int n,m;
bool visited[N][N] = {false};
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};
char dir[4] = {'U','D','R','L'}, grid[N][N];
pii parent[N][N];
char moves[N][N];

void bfs(int x, int y)
{
    queue<pii> q;
    q.push({x,y});
    visited[x][y] = true;

    while(!q.empty())
    {
        auto [x,y] = q.front(); q.pop();
        for(int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            else if(grid[nx][ny]=='#' || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            parent[nx][ny] = {x,y};
            moves[nx][ny] = dir[k];
            q.push({nx,ny});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    int startx = -1, starty = -1, endx = -1, endy = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='A')
            {
                startx = i; starty = j;
            }
            else if(grid[i][j]=='B')
            {
                endx = i; endy = j;
            }
        }

    bfs(startx,starty);

    if(!visited[endx][endy]) cout<<"NO";
    else
    {
        vector<char> path;
        int x = endx, y = endy;
        while(x!=startx || y!=starty)
        {
            path.push_back(moves[x][y]);
            auto [px,py] = parent[x][y];
            x = px; y = py;
        }

        reverse(path.begin(),path.end());
        cout<<"YES\n"<<path.size()<<"\n";
        for(char c: path) cout<<c;
    }
    return 0;
}
