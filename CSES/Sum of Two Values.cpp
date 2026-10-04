#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    vector<pair<int,int>> A(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i].first;
        A[i].second = i + 1;
    }

    sort(A.begin(), A.end());

    int i = 0, j = n - 1;

    while(i < j)
    {
        int sum = A[i].first + A[j].first;
        if(sum == x)
        {
            cout << A[i].second << " " << A[j].second;
            return 0;
        }
        else if(sum < x) i++;
        else j--;
    }
    cout << "IMPOSSIBLE";
    return 0;
}
