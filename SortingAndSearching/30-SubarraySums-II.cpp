#include <bits/stdc++.h>
using namespace std;
 
/* When You need Ordered Set*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// using namespace __gnu_pbds;
 
// using ordered_set = tree<
//     pair<int, int>,
//     null_type,
//     less<pair<int, int>>,
//     rb_tree_tag,
//     tree_order_statistics_node_update
// >;
 
void printArray(const vector<int>& arr) {
    for (int x : arr)
        std::cout << x << ' ';
    std::cout << '\n';
}
 
// using Interval = array<long long, 2>;
// struct Compare {
//     bool operator()(const Interval& a, const Interval& b) const {
//         // if (a[1] != b[1]) return a[1] < b[1];
//         // if (a[0] != b[0]) return a[0] < b[0];
//         return a[0] > b[0];
//     }
// };
 
 
void solve() {
    int n, x;
    cin >> n >> x;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    map<long long, long long> mp;
    // mp.reserve(n/2);
    // mp.max_load_factor(3.0);
    mp[0] = 1;
    long long runsum = 0, count = 0;
 
    for (int i = 0; i < n; i++) {
        // cout << i << '\n';
        runsum += arr[i];
 
        count += mp[runsum -x];
 
        mp[runsum]++;
    }
 
    cout << count << endl;
}
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
 
    // freopen("test_input.txt (1)", "r", stdin);
    // freopen("user_output.txt", "w", stdout);
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
