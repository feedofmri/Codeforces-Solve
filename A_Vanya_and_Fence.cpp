#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > m)
        {
            c++;
        }
    }
    cout << n + c << endl;

    return 0;
}