#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
void printArray(const vector<int>& arr) {
    for (int x: arr) {
        cout << x << ' ';
    }
    cout << endl;
}
 
void solve(){
    int n;
    cin >> n;
 
    vector<array<int, 3>> ranges(n);
    for (int i = 0; i < n; i++) {
        cin >> ranges[i][0] >> ranges[i][1];
        ranges[i][2] = i;
    }
 
    sort(ranges.begin(), ranges.end(), [](const auto&a , const auto& b) {
        if (a[0] == b[0]) return a[1] > b[1];
        return a[0] < b[0];
    });
 
    vector<int> a(n);
    vector<int> b(n);
 
    int maxend = -1;
    for (int i = 0; i < n; i++) {
        auto range = ranges[i];
        if (maxend >= range[1]) b[range[2]] = 1;
        maxend = max(maxend, range[1]);
    }
 
    int minend = INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        auto range = ranges[i];
        if (minend <= range[1]) a[range[2]] = 1;
        minend = min(minend, range[1]);
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
