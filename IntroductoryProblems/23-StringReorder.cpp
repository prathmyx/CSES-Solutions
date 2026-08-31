#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
 
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] > (s.size() + 1) / 2) {
            cout << -1;
            return;
        }
    }
 
    string ans =  "";
    char prev = '\0';
 
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < 26; j++) {
            if (freq[j] == 0 || (prev == 'A' + j)) continue;
            freq[j]--;
 
            int maxInd = max_element(freq.begin(), freq.end()) - freq.begin();
            int places = (j == maxInd) ? (s.size() - i - 2) : (s.size() - i - 1);
 
            if (freq[maxInd] > (places + 1) / 2) {
                freq[j]++;
                continue;
            }
 
            ans.push_back('A' + j);
            prev = 'A' + j;
            break;
        }
    }
 
    cout << ans << endl;
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
