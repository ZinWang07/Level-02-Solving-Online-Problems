#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
void process()
{
    int n,start; cin>>n;
    vector<int> A(n+1),Path;
    for(int i=1;i<=n;i++) cin>>A[i];
    int tmp_max = *max_element(A.begin()+1,A.end());

    set<int> available;
    for(int i=1;i<=n;i++)
    {
        available.insert(i);
        if(A[i]==tmp_max) start=i;
    }

    int curr=start;

    available.erase(curr);
    Path.push_back(curr);

    for(int step=1;step<n;step++)
    {
        auto it = available.lower_bound(A[curr]);

        if(it == available.end())
        {
            cout << "NO\n";
            return;
        }
        int v = *it;

        Path.push_back(v);
        available.erase(it);
        curr = v;
    }

    if(A[curr]<=Path[0])
    {
        cout<<"YES\n";
        for(auto &p: Path) cout<<p<<" ";
        cout<<'\n';
    }
    else cout<<"NO\n";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        process();
    }
    return 0;
}
