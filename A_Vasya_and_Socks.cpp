#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    for(int i=1; i*n<=m; i++){
        m++;
    }
    cout << m << endl;
}