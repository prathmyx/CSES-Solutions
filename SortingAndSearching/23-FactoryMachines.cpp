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
 
bool check(vector<long long>& times, long long x, long long t) {
    long long ans = 0;
    for (auto time: times) {
        ans += x / time;
 
        if (ans >= t) return true;
    }
    return false;
}
 
void solve() {
    long long n, t;
    cin >> n >> t;
 
    vector<long long> times(n);
    for (int i = 0; i < n; i++) cin >> times[i];
 
    sort(times.begin(), times.end());
 
    long long low = 0, high = times.front() * t;
    long long ans = high;
    while (low <= high) {
        long long mid = (low + high) / 2;
 
        if (check(times, mid, t)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
 
    cout << ans << endl;
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
