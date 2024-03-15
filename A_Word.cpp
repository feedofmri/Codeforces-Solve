#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            c++;
        }
    }
    if (c > s.size() / 2) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    
    return 0;
}