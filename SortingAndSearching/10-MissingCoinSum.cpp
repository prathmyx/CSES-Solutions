#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
 
    long long curr_sum = 0;
 
    for (int i = 0; i < n; i++) {
        if (curr_sum + 1 < a[i]) {
            cout << curr_sum + 1 << "\n";
            return;
        }
        curr_sum += a[i];
    }
 
    cout << curr_sum + 1 << "\n";   
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
