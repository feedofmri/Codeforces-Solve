#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n=10, count=0;
        char m;

        while(n--){
        for(int i=1; i<=10; i++){
            cin >> m;
            if(m=='X'){
                if(i<6){
                    count+=i;
                    cout << count <<" ";
                }
                else{
                    switch (i) {
                        case 6:
                            count +=5;
                            cout << count <<" ";
                            break;
                        case 7:
                            count +=4;
                            cout << count <<" ";
                            break;
                        case 8:
                            count +=3;
                            cout << count <<" ";
                            break;
                        case 9:
                            count +=2;
                            cout << count <<" ";
                            break;
                        case 10:
                            count +=1;
                            cout << count <<" ";
                            break;
                    }
                }
            }
        }
        }
        cout << count <<"\n";
    }
}