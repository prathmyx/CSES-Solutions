#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
 
    int ans = 0, curr = 0;
    char prev = 'p';
 
    for (char c : s){
        if (c != prev) curr = 1;
        else curr++;
 
        ans = max(ans, curr);
        prev = c;
    }
 
    cout << ans << endl;
}
 
int main(){
    solve();
}
