#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n-1 == 0){
        cout << "I hate it";
    }
    else{
        cout << "I hate ";
        for(int i = 1; i < n; i++){
            if(i % 2 == 0){
                cout << "that I hate ";
            }
            else{
                cout << "that I love ";
            }
        }
        cout << "it";
    }

}