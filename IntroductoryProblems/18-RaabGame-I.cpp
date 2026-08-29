#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, a, b;
    cin >> n >> a >> b;
 
    if ((a*b == 0 && a + b > 0) || a + b > n) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
 
    for (int i = 1; i <= n; i++) cout << i << " ";
    cout << endl;
    for (int i = 1; i <= n - a - b; i++) cout << i << " ";
    for (int i = n - b + 1; i <= n; i++) cout << i << " ";
    for (int i = n - a - b + 1; i <= n - b; i++) cout << i << " ";
    cout << endl;
    
}
 
int main(){
    // freopen("test_input.txt", "r", stdin);
    // freopen("user_output.txt", "w", stdout);
    int t;
    cin >> t;
 
    while (t--) solve();
 
    // while(1)  solve();
    // solve();
}
