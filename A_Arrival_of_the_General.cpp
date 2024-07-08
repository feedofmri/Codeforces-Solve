#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max = 0, min = 101, maxI = 0, minI = 0;

    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > max){
            max = v[i];
            maxI = i;
        }
        if(v[i] <= min){
            min = v[i];
            minI = i;
        }
    }

    if(maxI > minI){
        cout << maxI + (n - minI - 2);
    }else{
        cout << maxI + (n - minI - 1);
    }
}