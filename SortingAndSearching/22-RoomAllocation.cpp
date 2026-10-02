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
 
using Interval = array<int, 3>;
 
struct CompareByEnd {
    bool operator()(const Interval& a, const Interval& b) const {
        // if (a[1] != b[1]) return a[1] < b[1];
        // if (a[0] != b[0]) return a[0] < b[0];
        return a[1] < b[1];
    }
};
 
void solve() {
    int n;
    cin >> n;
 
    vector<array<int, 3>> ranges(n);
    for (int i = 0; i < n; i++) {
        cin >> ranges[i][0] >> ranges[i][1];
        ranges[i][2] = i;
    }
    
    sort(ranges.begin(), ranges.end(), [](const auto& a, const auto& b) {
        return a[1] < b[1];
    });
 
    int ans = 0;
    vector<int> rooms(n);
 
    multiset<array<int, 3>, CompareByEnd> ms;
    for (int i = 0; i < n; i++) {
        auto range = ranges[i];
        // cout << range[0] << ' ' << range[1] << ' ' << range[2] << ' ';
        // cout << endl;
        auto opt = ms.lower_bound({-1, range[0], -1});
 
        if (opt != ms.begin()) {
            // cout << ms.size() << endl;
            --opt;
 
            // for (int i = 0; i < 3; i++) {
            //     cout << (*opt)[i] << ' ';
            // }
            // cout << endl;
 
            rooms[range[2]] = rooms[(*opt)[2]];
            ms.erase(opt);
            ms.insert(range);
            continue;
        }
 
        ans++;
        rooms[range[2]] = ans;
        ms.insert(range);
    }
 
    cout << ans << endl;
    printArray(rooms);
 
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
