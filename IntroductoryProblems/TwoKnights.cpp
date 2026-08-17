#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    cout << 0 << endl;
    long long n, ans = 0;
    cin >> n;
 
    for (long long i = 2; i <= n; i++) {
        ans += (2 * i * i * i)  - (3 * i * i) - (7 * i) + 16;
        cout << ans << endl;
    }
}
 
int main(){
    solve();
}
