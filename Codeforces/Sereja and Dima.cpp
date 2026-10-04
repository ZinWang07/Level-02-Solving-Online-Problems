#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void process()
{
    int n,sum1=0,sum2=0,i,j; cin>>n;
    vector<int> A(n);
    for(i=0;i<n;i++) cin>>A[i];

    i=0,j=n-1;
    while(!A.empty())
    {
        if(A[j]>A[i])
        {
            sum1+=A[j];
            A.pop_back();
            j--;
        }
        else
        {
            sum1+=A[i];
            A.erase(A.begin());
            j--;
        }
        if(A.empty()) break;
        if(A[j]>A[i])
        {
            sum2+=A[j];
            A.pop_back();
            j--;
        }
        else
        {
            sum2+=A[i];
            A.erase(A.begin());
            j--;
        }
    }

    cout<<sum1<<" "<<sum2;
}
int main()
{
    process();
    return 0;
}
