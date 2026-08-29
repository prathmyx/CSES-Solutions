#include <bits/stdc++.h>
using namespace std;
int next(int x, int l) {
    x += 2;
    if (x > l) return -l;
    return x;
}
 
void solve(){
    int n;
    cin >> n;
 
    vector<vector<int>> mat(n, vector<int>(n, 0));
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) mat[i][j] = j;
            else if (i > j) mat[i][j] = mat[j][i];
            else {
                if (i & 1) {
                    if (j & 1) mat[i][j] = mat[i - 1][j] - 1;
                    else mat[i][j] = mat[i - 1][j] + 1;
                } else {
                    if (i == j) mat[i][j] = 0;
                    else {
                        int l = mat[i-1][i];
                        int x = mat[i][j-1] - mat[i-1][j-1];
                        mat[i][j] = mat[i-1][j] + next(x, l);
                    }
                }
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " " ;
        }
        cout << "\n";
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
