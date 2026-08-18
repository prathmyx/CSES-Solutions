#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    int count = 0;
    int base = 5;
 
    while (base <= n) {
        count += n/base;
        base *= 5;
    
    }
 
    cout << count << endl;
}
 
int main(){
    // while(1)  solve();
    solve();
}
