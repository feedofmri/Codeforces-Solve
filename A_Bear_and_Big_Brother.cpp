#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, count=0;
    cin >> m >> n;
    while(m <= n)
    {
        m *= 3;
        n *= 2;
        count++;
    }
    cout << count << endl;
}