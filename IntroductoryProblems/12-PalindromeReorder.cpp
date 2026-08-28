#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
 
    vector<int> freq(26);
 
    for (char c: s) {
        freq[c - 'A']++;
    }
 
    int odd = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] & 1) {
            if (odd != -1) {
                cout << "NO SOLUTION" << endl;
                return;
            }
            odd = i;
        }
    }
 
    string start = "", end = "";
    for (int i = 0; i < 26; i++) {
        start += string(freq[i]/2, ('A' + i));
        end = string(freq[i]/2, ('A' + i)) + end;
    }
 
    if (odd != -1) {
        start += ('A' + odd);
    }
 
    cout << start + end << endl;
}
 
int main(){
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
