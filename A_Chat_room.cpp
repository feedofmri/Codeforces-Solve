#include <bits/stdc++.h>
 
using namespace std;
int main() {
    string str;
    cin >> str;
    int n = str.size();
    int i = 0;
    while (i < n && str[i] != 'h') {
        i++;
    }
    i++;
    while (i < n && str[i] != 'e') {
        i++;
    }
    i++;
    while (i < n && str[i] != 'l') {
        i++;
    }
    i++;
    while (i < n && str[i] != 'l') {
        i++;
    }
    i++;
    while (i < n && str[i] != 'o') {
        i++;
    }
    if (i < n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}