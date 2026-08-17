#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    if (n % 4 == 0 || n % 4 == 3) {
        cout << "YES" << endl;
        int mid = (n + 1)/2;
        int quar = (n + 1)/4;
 
        cout << mid << " " <<  endl;
        cout << 1 << " " << ((n % 4 == 0)?n:mid) << " ";
        for (int i = 2; i <= quar; i++) {
            cout << i << " " << 2*mid + 1 - i << " ";
        }
        cout << endl;
 
        cout << n / 2 << endl;
        for (int i = quar + 1; i < mid; i++) {
            cout << i << " " << 2*mid + 1 - i << " ";
        }
        cout << mid + 1 << " ";
        if (n % 4 == 0) cout << mid << endl;
    } else cout << "NO";
}
 
int main(){
    solve();
}
