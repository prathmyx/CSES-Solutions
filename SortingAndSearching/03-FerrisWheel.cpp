#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, x;
    cin >> n >> x;
 
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
 
    int ans = 0, i = 0, j = n - 1;
 
    while (i <= j) {
        if (a[i] + a[j] <= x) {
            i++;
        } 
        ans++;
        j--;
    }
 
    cout << ans << endl;    
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
