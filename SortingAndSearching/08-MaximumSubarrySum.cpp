#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    long long sum = 0, ans = INT64_MIN;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
 
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }
 
    cout << ans << "\n";
 
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
