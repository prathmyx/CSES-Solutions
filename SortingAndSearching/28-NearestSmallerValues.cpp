#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
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
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    vector<int> ans(n);
    ans[0] = 0;
 
    for (int i = 1; i < n; i++) {
        int checkind = i - 1;
        while (checkind != -1 && arr[checkind] >= arr[i]) {
            checkind = ans[checkind] - 1;
        }
 
        ans[i] = checkind + 1;
    }
 
    printArray(ans);
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
