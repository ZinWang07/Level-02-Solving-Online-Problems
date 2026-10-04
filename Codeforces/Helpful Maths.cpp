#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void sol()
{
    string s; cin>>s;
    int i=0;
    vector<int> A;
    while(s[i]!='\0')
    {
        if(s[i]!='+') A.push_back(s[i]-48);
        i++;
    }

    sort(A.begin(),A.end());
    cout<<A[0];

    for(int j=1;j<A.size();++j) cout<<"+"<<A[j];
}
int main()
{
    sol();
    return 0;
}
