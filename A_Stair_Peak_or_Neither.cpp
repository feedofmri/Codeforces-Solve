#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p;
    cin >> p;
    while(p--){
        int n, m, k;
        cin >> n >> m >> k;
        if(n < m && m < k)
        {
            cout << "STAIR\n";
        }
        else if(n < m && m > k)
        {
            cout << "PEAK\n";
        }
        else
        {
            cout << "NONE\n";
        }
    }
    return 0;
}