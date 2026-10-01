#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
// Define ordered_set with indexing support
template <typename T>
using ordered_set = tree<
    T,                      // Key type
    null_type,              // Mapped type (null for set)
    less<T>,                // Comparator
    rb_tree_tag,            // Underlying tree type
    tree_order_statistics_node_update // Node update policy
>;
 
void solve(){
    int n, k;
    cin >> n >> k;
 
    ordered_set<int> s;
    for (int i = 1; i <= n; i++){
        s.insert(i);
    }
 
    long long ind = 0;
    while (s.size() > 0){
        ind = (ind + k) % s.size();
        cout << *s.find_by_order(ind) << " ";
        s.erase(s.find_by_order(ind));
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
