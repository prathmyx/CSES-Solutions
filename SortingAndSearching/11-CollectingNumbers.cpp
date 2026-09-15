#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(n, 0);
 
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
 
        if (x == 1 || a[x - 2] == 0) {
            a[x - 1] = 2;
        } else {
            a[x - 1] = 1;
        }
    }
 
    int sum = n;
    for_each(a.begin(), a.end(), [&sum](int i) { sum -= i; });
    
    cout << -sum << "\n";
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
