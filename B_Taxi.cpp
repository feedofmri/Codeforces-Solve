#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    float sum = 0;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
    }

    sum = ceil(sum/4);
    
    cout << sum << endl;


}