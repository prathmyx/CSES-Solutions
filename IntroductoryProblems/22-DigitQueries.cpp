#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long k;
    cin >> k;
 
    long long  count = 9;
    long long digit = 1;
 
    while (count*digit < k) {
        k -= count*digit;
        digit++;
        count *= 10;
    }
    count /= 10;
    if (digit > 2) count += (long long)pow(10, digit - 2) - 1;
 
    long long number = count + (k / digit) + 1;
    if (k % digit == 0) {
        number--;
    }
 
    string s = to_string(number);
 
    cout << s[(k % digit + digit - 1) % digit] << endl;
}
 
int main(){
    // freopen("test_input.txt", "r", stdin);
    // freopen("user_output.txt", "w", stdout);
    int t;
    cin >> t;
 
    while (t--) solve();
 
    // while(1)  solve();
    // solve();
}
