#include <iostream>
#include <string>
using namespace std;

string word1,word2;
void input()
{
    cin >> word1;
    cin >> word2;
    return;
}

string sol()
{
    string ans="";
    int i=0,j=0,n = word1.size(), m = word2.size();

    while(i<n || j<m)
    {
        if(i<n)
        {
            ans+=word1[i];
            ++i;
        }
        if(j<m)
        {
            ans+=word2[j];
            ++j;
        }
    }
    return ans;
}

int main()
{
    input();
    cout<<sol();
    return 0;
}
