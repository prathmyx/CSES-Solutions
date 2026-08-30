#include <bits/stdc++.h>
using namespace std;
 
void put(unsigned x, unsigned y, unsigned v, vector<vector<int>>& arr, queue<pair<int, int>>& q) {
    if (x < 0 || x >= arr.size() || y < 0 || y >= arr.size()) return;
 
    if (arr[x][y] <= v + 1) return;
    arr[x][y] = v + 1;
    q.push({x, y});
}
 
void solve(){
    int n;
    cin >> n;
 
    vector<vector<int>> arr(n, vector<int>(n, INT_MAX));
    queue<pair<int, int>> q;
 
    arr[0][0] = 0;
    q.push({0, 0});
 
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
 
        put(x + 2, y + 1, arr[x][y], arr, q);
        put(x + 2, y - 1, arr[x][y], arr, q);
        put(x - 2, y + 1, arr[x][y], arr, q);
        put(x - 2, y - 1, arr[x][y], arr, q);
        put(x + 1, y + 2, arr[x][y], arr, q);
        put(x + 1, y - 2, arr[x][y], arr, q);
        put(x - 1, y + 2, arr[x][y], arr, q);
        put(x - 1, y - 2, arr[x][y], arr, q);
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
 
int main(){
    // freopen("test_input.txt", "r", stdin);
    // freopen("user_output.txt", "w", stdout);
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
