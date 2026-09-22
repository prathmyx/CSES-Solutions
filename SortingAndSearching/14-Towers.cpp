#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> a;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
 
        auto it = upper_bound(a.begin(), a.end(), x);
 
        if (it == a.end()) {
            a.push_back(x);
        } else {
            *it = x;
        }
    }
 
    cout << a.size() << "\n";
}
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
 
    // freopen("test_input.txt", "r", stdin);
    // freopen("user_output.txt", "w", stdout);
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
