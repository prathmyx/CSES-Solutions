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
        cout << x << ' ';
    cout << '\n';
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
 
    vector<array<int, 2>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0];
        arr[i][1] = i + 1;
    }
 
    sort(arr.begin(), arr.end(), [](const auto& a, const auto& b) {
        return a[0] < b[0];
    });
 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long rem = 1ll * x - arr[i][0] - arr[j][0];
 
            if (rem <= 0) continue;
            int k = j + 1, l = n - 1;
            while (k < l) {
 
                long long s = 1ll * arr[k][0] + arr[l][0];
 
                if (s < rem) {
                    k++;
                } else if (s > rem) {
                    l--;
                } else {
                    cout << arr[i][1] << " " << arr[j][1] << " " << arr[k][1] << " " << arr[l][1] << endl;
                    return;
                }
            }
        }
    }
 
    cout << "IMPOSSIBLE" << endl;
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
