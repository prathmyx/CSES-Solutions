#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    long max = 0, ans = 0;
 
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
 
        if (x > max) max = x;
        else ans += max - x;
    }
    cout << ans << endl;
}
 
int main(){
    solve();
}
