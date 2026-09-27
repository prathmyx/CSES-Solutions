#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    map<int, int> mp;
    long long count = 0;
    int start = 0;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        
        if (mp.find(x) == mp.end()){
            mp[x] = i;
        } else {
            start = max(start, mp[x]);
            mp[x] = i;
        }
        count += (i - start);
        // cout << count << " ";
    }
    cout << count << "\n";
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
