#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& vec)
{
    int n = vec.size();
    for(int i=0; i<=n-2; i++){
        int min = vec[i];
        int index = i;
        for(int j=i+1; j<=n-1; j++){
            if(vec[j] < min){
                min = vec[j];
                index = j;
            }
        }
        swap(vec[i], vec[index]);
    }
}

int main()
{
    vector<int> vec;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    selection_sort(vec);

    int min = vec[n-1] - vec[0];
    
    for(int i=0; i<=m-n; i++){
        if(vec[i+n-1] - vec[i] < min){
            min = vec[i+n-1] - vec[i];
        }
    }
        cout << min;

    return 0;
}