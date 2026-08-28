#include <bits/stdc++.h>
using namespace std;
 
int solutionCount = 0;
 
void printBoard(vector<vector<int>>& board) {
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
 
int safe(vector<vector<int>>& board, int i, int j) {
    int k;
    for (k = 0; k < i; k++) {
        if (board[k][j] == 1) return 0;
    }
    k = 1;
    while (i - k > -1 && j - k > -1) {
        if (board[i-k][j-k] == 1) return 0;
        k++;
    }
    k = 1;
    while (i - k > -1 && j + k < 8) {
        if (board[i-k][j+k] == 1) return 0;
        k++;
    }
    return 1;
}
 
void place(vector<vector<int>>& board, int row) {
    if (row == 8) {
        solutionCount += 1;
        // printBoard(board);
        return;
    }
 
    for (int i = 0; i < 8; i++) {
        if (board[row][i] != -1 && safe(board, row, i)){
            board[row][i] = 1;
            // printBoard(board);
            place(board, row + 1);
            board[row][i] = 0;
        }
    }
 
}
 
void solve(){
    vector<vector<int>> board(8, vector<int>(8));
    char x;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> x;
 
            if (x == '.') board[i][j] = 0;
            else board[i][j] = -1;
        }
    }
 
    place(board, 0);
    cout << solutionCount << endl;
}
 
int main(){
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
