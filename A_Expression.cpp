#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    cin >> a >> b >> c;
    sum1 = a*b*c;
    sum2 = (a+b)*c;
    sum3 = a*(b+c);
    sum4 = a+b+c;
    cout << max(sum1, max(sum2, max(sum3, sum4)));
}