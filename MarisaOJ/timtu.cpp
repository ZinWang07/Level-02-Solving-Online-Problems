#include <iostream>
using namespace std;
int n,m;
char A[100][100];
bool check(int x, int y, int dx, int dy, string s)
{
    for(int k = 0; k < s.size(); k++)
    {
        int nx = x + k * dx;
        int ny = y + k * dy;

        if(nx < 0 || nx >= n || ny < 0 || ny >= m) return false;

        if(A[nx][ny]!=s[k]) return false;
    }
    return true;
}
int main()
{
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>A[i][j];
    string s; cin>>s;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if(A[i][j]!=s[0]) continue;

            if(check(i,j,0,1,s) || check(i,j,1,0,s) || check(i,j,0,-1,s) || check(i,j,-1,0,s))
            {
                cout<<"YES";
                return 0;
            }
        }

    cout<<"NO";
    return 0;
}
