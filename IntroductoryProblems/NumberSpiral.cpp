#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long x, y;
    cin >> x >> y;
 
    long long k = max(x, y);
 
    long long ans = 1 + k * (k - 1);
 
    if (k & 1)  cout << ans + y - x << endl;
    else        cout << ans + x - y << endl;
 
}
 
int main(){
    int t;
    cin >> t;
 
    while (t--) solve();
}
