#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            int n;
            cin >> n;
            if (n == 1) {
                cout << abs(i - 3) + abs(j - 3) << std::endl;
                return 0;
            }
        }
    }
    
    return 0;
}