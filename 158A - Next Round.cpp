#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int arr[n], ans =0;
    
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int ref = arr[k-1];
    
    for(int i =0; i<n; i++){
        if(arr[i]>=ref && arr[i])
            ++ans;
    }
    
    cout << ans;
    return 0;
}
