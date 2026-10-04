#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> digits(n);
    for(int i=0;i<n;++i) cin>>digits[i];
    int m = digits.size(),tmp=0,cnt,j=0;
    for(int i=0;i<n;++i)
        tmp = tmp*10 + digits[i];
    tmp++;
    cout<<tmp<<" ";
    digits.clear();
    digits.resize(m);
    j=m-1;
    while(tmp!=0 && j>0)
    {
        cnt = tmp%10;
        digits[j--] = cnt;
        tmp/=10;
    }
    for(int i=0;i<m;++i) cout<<digits[i]<<" ";
    return 0;
}
