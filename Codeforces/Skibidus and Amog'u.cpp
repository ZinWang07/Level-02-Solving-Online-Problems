#include <iostream>
#include <string>
using namespace std;
void process()
{
    string s; cin>>s;
    for(int i=0;i<s.size()-2;i++) cout<<s[i];
    cout<<"i\n";
}
int main()
{
    int t; cin>>t;
    while(t--) process();
    return 0;
}
