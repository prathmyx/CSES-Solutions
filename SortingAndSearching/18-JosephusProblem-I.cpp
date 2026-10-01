#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    set<int> s;
    auto it = s.end();
    for (int i = 1; i <= n; i++) {
        it = s.emplace_hint(it, i); // faster than plain insert
    }
 
    it = ++s.begin();
    while (s.size() > 0) {
        if (it == s.end()) it = s.begin();
        cout << *it << " ";
        it = s.erase(it);
        if (it == s.end()) it = s.begin();
        if (s.size() == 0) break;
        it++;
    }
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
