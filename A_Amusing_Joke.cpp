#include<bits/stdc++.h>
using namespace std;

int main(){
    string guest, host, pile;
    cin >> guest >> host >> pile;

    string combined = guest + host;

    sort(pile.begin(), pile.end());
    sort(combined.begin(), combined.end());

    if(combined == pile) cout << "YES";
    else cout << "NO";
}