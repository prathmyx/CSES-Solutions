#include <bits/stdc++.h>
using namespace std;
 
int pathCount = 0;
string path;
vector<vector<int>> vis(7, vector<int>(7, 0));
 
bool inbound(int i, int j) {
    return (i >= 0 && i < 7 && j >= 0 && j < 7);
}
 
void dfs(int i, int j, int step){
    if ((i == 6 && j == 0) || step == 48) {
        pathCount += (step == 48 && i == 6 && j == 0);
        return;
    }
 
    if ((!inbound(i, j - 1) || vis[i][j - 1]) && (!inbound(i, j + 1) || vis[i][j + 1]) && inbound(i - 1, j) && inbound(i + 1, j) && !vis[i - 1][j] && !vis[i + 1][j]) return;
    if ((!inbound(i - 1, j) || vis[i - 1][j]) && (!inbound(i + 1, j) || vis[i + 1][j]) && inbound(i, j - 1) && inbound(i, j + 1) && !vis[i][j - 1] && !vis[i][j + 1]) return;
 
 
    vis[i][j] = 1;
    if (path[step] == '?' || path[step] == 'L') {
        if (inbound(i, j - 1) && !vis[i][j - 1])
            dfs(i, j - 1, step + 1);
    }
    if (path[step] == '?' || path[step] == 'U') {
        if (inbound(i - 1, j) && !vis[i - 1][j])
            dfs(i - 1, j, step + 1);
    }
    if (path[step] == '?' || path[step] == 'R') {
        if (inbound(i, j + 1) && !vis[i][j + 1])
            dfs(i, j + 1, step + 1);
    }
    if (path[step] == '?' || path[step] == 'D') {
        if (inbound(i + 1, j) && !vis[i + 1][j])
            dfs(i + 1, j, step + 1);
    }
    vis[i][j] = 0;
 
    return;
}
 
void solve(){
    cin >> path;
 
    dfs(0, 0, 0);
 
    cout << pathCount << endl;
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
