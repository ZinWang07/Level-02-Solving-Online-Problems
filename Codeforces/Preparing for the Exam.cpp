#include <iostream>
#include <set>
using namespace std;
void process()
{
    int n,m,k; cin>>n>>m>>k;
    int A[m];
    for(int i=0;i<m;i++) cin>>A[i];

    set<int> st;
    for(int i=0;i<k;i++)
    {
        int tmp; cin>>tmp;
        st.insert(tmp);
    }

    if(k==n)
    {
        for(int i=0;i<m;i++) cout<<"1";
        cout<<'\n';
        return;
    }

    if(n-k>=2)
    {
        for(int i=0;i<m;i++) cout<<"0";
        cout<<'\n';
        return;
    }

    for(int i=0;i<m;i++)
    {
        auto it = st.find(A[i]);
        if(it != st.end())
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
    cout<<'\n';
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
