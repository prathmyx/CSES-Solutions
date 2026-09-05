#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, x;
    cin >> n >> x;
 
    vector<array<int, 2>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i][0];
        a[i][1] = i + 1;
    }
 
    sort(a.begin(), a.end());
 
    int i = 0, j = n - 1;
    while (i < j) {
        int sum = a[i][0] + a[j][0];
        if (sum == x) {
            cout << a[i][1] << " " << a[j][1] << endl;
            return;
        } else if (sum < x) {
            i++;
        } else {
            j--;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
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
