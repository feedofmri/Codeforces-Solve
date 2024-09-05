#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
        int n, k, l; cin >> n >> k;
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> l;
            v.push_back(l);
        }
        if(is_sorted(v.begin(), v.end()) || k > 1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}