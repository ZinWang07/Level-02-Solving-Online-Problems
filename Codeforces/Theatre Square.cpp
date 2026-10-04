#include <iostream>

using namespace std;
int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long dai=0, rong=0, cd=0, cr=0;
    while (dai<n){
        dai+=a;
        cd++;
    }
    while (rong<m){
        rong+=a;
        cr++;
    }
    cout << cd*cr;
    return 0;
}
