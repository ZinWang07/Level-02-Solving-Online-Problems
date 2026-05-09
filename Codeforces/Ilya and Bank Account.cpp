#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int sol()
{
    int n; cin>>n;
    if(n>0) return n;

    string s = to_string(n),s1=s;

    return max(stoi(s.erase(s.length()-1,1)),stoi(s1.erase(s1.length()-2,1)));
}
int main()
{
    cout<<sol();
    return 0;
}
