#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m;
    cin >> n >> m;
 
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++) {
        pos[arr[i]] = i;
    }
 
    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) rounds++;
    }
 
    auto check = [&pos, n](int x) {
        if (x <= 1 || x > n) return 0;
        if (pos[x] < pos[x - 1]) return 1;
        else return 0;
    };
 
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
 
        swap(arr[a], arr[b]);
 
        set<int> to_check;
        to_check.insert(arr[a]); to_check.insert(arr[b]); to_check.insert(arr[a] + 1); to_check.insert(arr[b] + 1);
 
        for_each(to_check.begin(), to_check.end(), [&check, &rounds](int x) {
            rounds -= check(x);
        });
 
        swap(pos[arr[a]], pos[arr[b]]);
        for_each(to_check.begin(), to_check.end(), [&check, &rounds](int x) {
            rounds += check(x);
        });
 
        cout << rounds << "\n";
    }
    
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
