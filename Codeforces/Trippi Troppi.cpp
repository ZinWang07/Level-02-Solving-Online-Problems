#include <iostream>
#include <string>
using namespace std;
void process()
{
    int t; cin>>t; getchar();
    while(t--)
    {
        string s; getline(cin,s);
        cout<<s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==' ') cout<<s[i];
        }
        cout<<'\n';
    }
}

int main()
{
    process();
    return 0;
}
