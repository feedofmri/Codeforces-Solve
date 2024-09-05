#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
        int n, x, diff=0, ans=0; cin >> n >> x;
        int point[n+2];
        point[0] = 0;
        point[n+1] = x;

        for(int i = 1; i <= n; i++){
            cin >> point[i];
        }

        for(int i = 0; i < n+1; i++){
            diff = point[i+1]-point[i];
            
            if(i == n){
                if(diff*2 > ans){
                ans = diff*2;
            }
            }
            else if(diff > ans){
                ans = diff;
            }
        }
        cout << ans << '\n';
    }
}