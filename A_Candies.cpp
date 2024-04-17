#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m=1;
        cin >> n;
        while(1){
            int power = pow(2, m+1)-1;
            if(n % power == 0){
                cout << n/power << endl;
                break;
            }
            else{
                m++;
            }
        }
    }
}
