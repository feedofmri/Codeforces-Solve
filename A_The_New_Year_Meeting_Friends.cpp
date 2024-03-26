#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n = 3;
    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[2] - v[0] << endl;
    
}