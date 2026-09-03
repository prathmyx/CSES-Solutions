#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    vector<array<int, 2>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }   
 
    sort(a.begin(), a.end(), [](array<int, 2>& x, array<int, 2>& y) {
        return x[1] < y[1];
    });
 
    int ans = 0, last = - 1;
    for (int i = 0; i < n; i++) {
        if (a[i][0] >= last) {
            ans++;
            last = a[i][1];
        }
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
