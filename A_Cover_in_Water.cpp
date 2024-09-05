#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t; cin >> t;

    while(t--){
        int n, count=0, flag = 1; cin >> n;
        string s; cin >> s;

        for(int i=0; i<n; i++){
            if(i>0){
                if(s[i] == '.' && s[i+1] == '.' && s[i-1] == '.'){
                cout << 2 << "\n";
                flag = 0;
                break;
            }
            }

            if(s[i] == '.'){
                count++;
            }
        }

        if(flag){
            cout << count << "\n";
        }
    }
}