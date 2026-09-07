#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
 
    int mid = a[n/2];
    long long ans = 0;
 
    for (int i = 0; i < n; i++) ans += abs(a[i] - mid);
 
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
