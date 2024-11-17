#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, count=0, top=0; cin >> n;
        while(n){
            top = n%10;
            n = n/10;
            if(n){
                count++;
            }
        }
        cout << (9*count) + top << "\n";
    }
}