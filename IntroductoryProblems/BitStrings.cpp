#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    int mod = 1000000007;
    long long ans = 1;
    long long base = 2;
 
    while (n) {
        if (n & 1)  ans = (ans * base) % mod;
        base = (base * base) % mod;
        n >>= 1;
    }
 
    cout << ans << endl;
}
 
int main(){
    solve();
}
