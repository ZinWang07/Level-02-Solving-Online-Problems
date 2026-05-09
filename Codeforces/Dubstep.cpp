#include <iostream>
#include <string>
using namespace std;
void process()
{
    string s,target="WUB",new_s = " "; cin>>s;
    size_t pos = s.find(target);

    while(pos!=string::npos)
    {
        s.replace(pos,target.length(),new_s);
        pos = s.find(target,pos + new_s.length());
    }

    while(s[0]==' ') s.erase(0,1);

    int n = s.size();
    while(s[n-1]==' ')
    {
        s.erase(n-1,1);
        n--;
    }

    for(int i=0;i<n;++i)
    {
        if((s[i]==' ') && (s[i+1]==' ')) s.erase(i,1);
    }
    cout<<s;
}
int main()
{
    process();
    return 0;
}
