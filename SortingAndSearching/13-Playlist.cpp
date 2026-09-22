#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    map<int, int> mp;
    int curr = 0, ans = 0, start = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
 
        if (mp.find(x) == mp.end() || mp[x] < start) {
            mp[x] = i;
            curr++;
        } else {
            ans = max(ans, curr);
            curr = i - mp[x];
            start = mp[x] + 1;
            mp[x] = i;
        }
    }
    cout << max(ans, curr) << "\n";
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
