#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, n, m;
    cin >> s;
    while(s--){
        int count = 0, l = 0;
        cin >> n >> m;
        char ch;
        vector<char> vec1;
        vector<char> vec2;
        for (int i = 0; i < n; ++i) {
        cin >> ch;
        vec1.push_back(ch);
    }
        while (l != m) {
    auto it = vec1.begin();
        while (it != vec1.end()) {
            if (find(vec2.begin(), vec2.end(), *it) == vec2.end()) {
                vec2.push_back(*it);
                it = vec1.erase(it);
            } else {
                ++it;
            }

        }
                count += 7 - vec2.size();
        l++;
        vec2.clear();
    }

    cout << count << endl;
    }
    
}