#include <bits/stdc++.h>
using namespace std;
 
int power(int b){
    long long a = 2, m = 1e9 + 7;
    long long ans = 1;
    while (b){
        if (b & 1) ans = (ans * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return ans;
}
 
void solve(){
    int n;
    cin >> n;
 
    unordered_map<int, int> mp;
    mp.reserve(n);
    int mod = 1e9 + 7;
 
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
 
    long long ans = 1;
    for (auto [k, v] : mp){
        ans = (ans * (v + 1)) % mod;
    }
 
    cout << (ans - 1 + mod) % mod << "\n";
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
