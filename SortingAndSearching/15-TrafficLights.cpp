#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int x, n;
    cin >> x >> n;
 
    set<int> s{0, x};
    multiset<int> ms{x};
 
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
 
        auto it = s.upper_bound(a);
        int r = *it;
        it--;
        int l = *it;
        s.insert(a);
 
        ms.erase(ms.find(r - l));
        ms.insert(r - a);
        ms.insert(a - l);
 
        cout << *ms.rbegin() << " ";
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
