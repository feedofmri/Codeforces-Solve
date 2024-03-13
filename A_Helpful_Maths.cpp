#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> i;
    for (int j = 0; j < s.size(); j++){
        if (s[j] != '+') {
            i.push_back(s[j] - '0');
        }
    }
    sort(i.begin(), i.end());
    for (int j = 0; j < i.size(); j++) {
        cout << i[j];
        if (j != i.size() - 1) {
            cout << "+";
        }
    }
    
    return 0;
}