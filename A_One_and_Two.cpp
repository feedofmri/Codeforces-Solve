#include<bits/stdc++.h>
using namespace std;
 
int solve()
{
    int n;
    cin>>n;
    int a[n];
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i] == 2;
    }
    long long total = 0;
    for(int i=0; i<n; i++)
    {
        total += a[i] == 2;
        if(total == sum - total)
        return i+1;
    }
    return -1;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}