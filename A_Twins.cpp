#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int>v;
    int n, sum=0, sum2=0, count=0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }

    sum = sum/2;
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < n; i++)
    {
        sum2 += v[i];
        count++;
        if(sum2 > sum)
        {
            break;
        }
    }
    cout << count << endl;

}