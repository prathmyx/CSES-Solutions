#include <bits/stdc++.h>
using namespace std;
 
void toh(int n, int from, int aux, int to){
    if (n == 0) return;
 
    toh(n - 1, from, to, aux);
    cout << from << " " << to << endl;
    toh(n - 1, aux, from, to);
}
 
void solve(){
    int n;
    cin >> n;
 
    cout << (1 << n) - 1 << endl;
    toh(n, 1, 2, 3);
}
 
int main(){
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
