#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<pair<int,int>> c;
        for (int x : a){
            int p = 100/x;
            c.push_back({p,x});
        }

        sort(c.begin(),c.end());
        int sum=0;

        for (auto [p, e] : c){
            if (p>sum+1) break;
            sum+=p*e;
        }

        if (sum>=100*n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
