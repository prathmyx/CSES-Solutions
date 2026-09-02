#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m;
    cin >> n >> m;
 
    int x;
    map<int, int> freq; // Map to store frequency of each element
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }
 
    for (int i = 0; i < m; i++) {
        cin >> x;
 
        // Find the largest element <= x
        auto it = freq.upper_bound(x);
        if (it == freq.begin()) {
            cout << -1 << '\n';
            continue;
        }
 
        --it; // Move to the largest element <= x
        cout << it->first << '\n';
 
        // Decrease the frequency or erase the element
        if (--it->second == 0) {
            freq.erase(it);
        }
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
