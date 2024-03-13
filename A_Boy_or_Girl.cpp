#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    vector<int> i(26, 0);
    for (int j = 0; j < a.size(); j++) {
        i[a[j] - 'a']++;
    }
    int c = 0;
    for (int j = 0; j < 26; j++) {
        if (i[j] > 0) {
            c++;
        }
    }
    if (c % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}