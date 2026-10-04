#include <iostream>
using namespace std;
int sol()
{
    int y,ans; cin>>y;
    int i=y+1; bool kt=true;

    while(i<=9000)
    {
        int j=i;
        int last_digit=j%10;
        j/=10;

        while(j!=0)
        {
            int cur_digit=j%10;
            if(cur_digit==last_digit)
            {
                kt=false;
                break;
            }
            last_digit=cur_digit;
            j/=10;
        }
        i++;
    }

    return i;
}
int main()
{
    cout<<sol();
    return 0;
}
