#include <bits/stdc++.h>
using namespace std;

const int N = 15;
int n,k,target;
int sum_group[N] = {0};
int group_id[N] = {0};
int A[N];
bool found = false;

void backtrack(int i)
{
    if(found) return;
    if(i>n)
    {
        found = true;
        return;
    }

    for(int j = 1; j <= k; j++)
        if(sum_group[j] + A[i] <= target)
        {
            group_id[i] = j;
            sum_group[j] += A[i];
            backtrack(i+1);
            if(found) return;
            sum_group[j] -= A[i];
            group_id[i] = 0;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>k;
    int total = 0;
    for(int i = 1; i <= n; i++)
    {
        cin>>A[i];
        total += A[i];
    }

    if(total%k!=0)
    {
        cout<<"ze";
        return 0;
    }

    target = total/k;
    backtrack(1);

    if(found)
        for(int i = 1; i <= n; i++) cout<<group_id[i]<<" ";
    else cout<<"ze";
    return 0;
}
