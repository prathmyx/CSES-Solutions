#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
using ordered_set = tree<
    pair<int, int>,
    null_type,
    less<pair<int, int>>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;
 
void printArray(const vector<int>& arr) {
    for (int x : arr)
        cout << x << ' ';
    cout << '\n';
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<array<int, 3>> ranges(n);
 
    for (int i = 0; i < n; i++) {
        cin >> ranges[i][0] >> ranges[i][1];
        ranges[i][2] = i;
    }
 
    sort(ranges.begin(), ranges.end(),
        [](const auto& a, const auto& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
 
            return a[0] < b[0];
        });
 
    vector<int> a(n), b(n);
 
    ordered_set os;
 
    // Calculate b
    for (int i = 0; i < n; i++) {
        auto [l, r, idx] = ranges[i];
 
        // Number of previous elements with endpoint >= r
        b[idx] = i - os.order_of_key({r, -1});
 
        os.insert({r, i});
    }
 
    os.clear();
 
    // Calculate a
    for (int i = n - 1; i >= 0; i--) {
        auto [l, r, idx] = ranges[i];
 
        // Number of elements with endpoint <= r
        a[idx] = os.order_of_key({r, n});
 
        os.insert({r, i});
    }
 
    printArray(a);
    printArray(b);
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
