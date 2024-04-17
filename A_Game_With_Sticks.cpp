#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int num = n<m ? n:m;
    if(num % 2 == 0){
        cout << "Malvika";
    }
    else{
        cout << "Akshat";
    }
}