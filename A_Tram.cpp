#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, in=0, out=0, curr=0, max=0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> out >> in;
        curr = curr - out + in;
        if(curr > max)
        {
            max = curr;
        }
    }
    cout << max << endl;
}