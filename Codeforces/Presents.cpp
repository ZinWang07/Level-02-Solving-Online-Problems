#include <iostream>
using namespace std;
const int N = 101;
int A[N],B[N],n;

void process()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>A[i];
        B[A[i]]=i;
    }

    for(int i=1;i<=n;++i) cout<<B[i]<<" ";
}

int main()
{
    process();
    return 0;
}
