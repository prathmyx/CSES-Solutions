#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int m, n;
    cin >> m >> n;
 
    vector<vector<char>> arr(m, vector<char>(n));
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int chars[4] = {0, 0, 0, 0};
 
            chars[arr[i][j] - 'A']++;
            if (i > 0) chars[arr[i - 1][j] - 'A']++;
            if (j > 0) chars[arr[i][j - 1] - 'A']++;
 
            for (int k = 0; k < 4; k++) {
                if (chars[k] == 0) {
                    arr[i][j] = 'A' + k;
                    break;
                }
            }
        }
    }
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
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
