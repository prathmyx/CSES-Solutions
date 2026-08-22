#include <bits/stdc++.h>
using namespace std;
 
long long minx = 1e9;
 
void start(vector<int> weights, long long p1, long long p2, int index){
    if(index == weights.size()){
        minx = min(minx, abs(p1 - p2));
        return;
    }
 
    start(weights, p1 + weights[index], p2, index + 1);
    start(weights, p1, p2 + weights[index], index + 1);
}
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> weights(n);
    for(auto &it:weights)   cin >> it;
 
    sort(weights.rbegin(), weights.rend());
    
    start(weights, 0, 0, 0);
 
    cout << minx << "\n";
}
 
int main(){
    // int t;
    // cin >> t;
 
    // while (t--) solve();
 
    // while(1)  solve();
    solve();
}
