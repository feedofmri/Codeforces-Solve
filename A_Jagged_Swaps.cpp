#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
        int n, l; cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> l;
            v.push_back(l);
        }
        if(v[0] == 1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
        
    }
}