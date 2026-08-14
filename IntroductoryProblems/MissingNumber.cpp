#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long n;
    cin >> n; 
    
    long sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        sum -= x;
    }
 
    cout << sum << endl;
}
 
int main(){
    solve();
