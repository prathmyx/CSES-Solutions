#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
 
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
 
    sort(s.begin(), s.end());
    sort(a.begin(), a.end());
 
    int ans = 0, i = 0, j = 0;
 
    while (i < n && j < m){
        if (abs(s[i] - a[j]) <= k){
            ans++;
            i++;
            j++;
        }
        else if (s[i] < a[j]){
            i++;
        }
        else{
            j++;
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
