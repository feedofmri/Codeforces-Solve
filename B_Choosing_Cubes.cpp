#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, n, f, k;
    cin >> s;
    while(s--){
        cin >> n >> f >> k;
        vector<int> vec1;
        int fval = 0;	
        bool flag = false;
        bool flag_yes = true;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec1.push_back(x);
        }
        fval = vec1[f-1];
        cout << fval << endl;
        sort(vec1.begin(), vec1.end());
        for (int i = 0; i < k; i++) {
            if(vec1[i] == fval){
                flag = true;
                break;
            }
        }
        if(flag){
            for (int j = k; j < n; j++) {
                if(vec1[j] == fval){
                    cout << "MAYBE\n";
                    flag_yes = false;
                }
            }
        }
        if(!flag){
            cout << "NO\n";
        }
        if(flag_yes){
            cout << "YES\n";
        }
        vec1.clear();

    }
}