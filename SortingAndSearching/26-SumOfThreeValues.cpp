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
 
    sort(arr.begin(), arr.end(), [](auto& a, auto& b) {
        return a[0] < b[0];
    });
 
    for (int i = 0; i < n; i++) {
        int f = arr[i][0];
        if (f >= x) break;
 
        int j = i + 1, k = n-1;
        while (j < k) {
            int s = f + arr[j][0] + arr[k][0];
            if (s > x) {
                k--;
            } else if (s < x) {
                j++;
            } else {
                cout << arr[i][1] << " " << arr[j][1] << " " << arr[k][1] << endl;
                return;
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
