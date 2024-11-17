#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, m, count=0; cin >> n;
        vector<int> list;

        for(int i =0; i<n; i++){
            cin >> m;
            list.push_back(m);
        }

        for(int i =0; i<n-1; i++){
            if((list[i]+list[i+1])%2==0){
                list[i+1] = list[i]*list[i+1];
                count++;
            }
        }
        cout << count << "\n";

    }
}