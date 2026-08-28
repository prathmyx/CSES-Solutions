#include <bits/stdc++.h>
using namespace std;
 
vector<string> gray(int n) {
    if (n == 1) return {"0", "1"};
 
    vector<string> prev = gray(n-1);
    int s = prev.size();
    for (int i = s - 1; i >= 0; i--) {
        prev.push_back("1" + prev[i]);
    }
    for (int i = 0; i < s; i++) {
        prev[i] = "0" + prev[i];
    }
 
    return prev;
}
 
void solve(){
    int n;
    cin >> n;
 
    for (auto x: gray(n)) {
        cout << x << endl;
    }
}
 
int main(){
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
