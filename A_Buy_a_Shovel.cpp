#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, r, s = 1;
    cin >> k >> r;
    while((s*k)%10 != 0 && (s*k)%10 != r){
        s++;
    }
    cout << s;
}