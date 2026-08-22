#include <bits/stdc++.h>
using namespace std;
 
vector<int> freq(26, 0);
vector<string> words;
 
void permutate(string curr, vector<int>& freq, int len){
    for(int i = 0; i < 26; i++){
        if (freq[i]){
            freq[i]--;
            permutate(curr + (char)('a' + i), freq, len);
            freq[i]++;
        }
    }
    if (curr.size() == len)   cout << curr << endl;
}
 
int fact(int x){
    if (x < 2) return 1;
    return x * fact(x - 1);
}
 
void solve(){
    string s;
    cin >> s;
 
    for (char c : s) {
        freq[c - 'a']++;
    }
 
    int count = fact(s.size());
    for (int i: freq) {
        count /= fact(i);
    }
 
    cout << count << endl;
    permutate("", freq, s.size());   
}
 
int main(){
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
