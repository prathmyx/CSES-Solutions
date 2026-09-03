#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> arr(n);
    vector<int> dep(n);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i] >> dep[i];
    }
 
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
 
    int i = 0, j = 0;
    int curr = 0, ans = 0;
 
    while (i < n && j < n) {
        if (arr[i] < dep[j]) {
            curr++;
            ans = max(ans, curr);
            i++;
        } else {
            curr--;
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
