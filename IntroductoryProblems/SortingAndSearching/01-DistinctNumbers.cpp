#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    set<int> s;
    int x;
    for (int i = 0; i < n; i++) cin >> x, s.insert(x);
 
    // for (auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
    cout << s.size() << "\n";
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
