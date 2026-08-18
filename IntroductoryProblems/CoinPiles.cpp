#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int a, b;
    cin >> a >> b;
 
    int y = ((a + b)/3 + a - b)/2;
    int x = y - a + b;
 
    // cout << x + 2*y << " " << y + 2*x << endl;
    if (x < 0 || y < 0) {
        cout << "NO" << endl;
        return;
    }
 
    if (x + 2*y == a && 2*x + y == b) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while (t--) solve();
 
    // while(1)  solve();
    // solve();
}
