#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p;
    cin >> p;
    while(p--){
        string s;
        cin >> s;
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
        
        if(h >= 12)
        {
            h -= 12;

            if(h == 0)
            {
                h = 12;
                if(m<10)
                {
                    cout << h << ":0" << m << " PM\n";
                }
                else
                {
                    cout << h << ":" << m << " PM\n";
                }
            }
            else if(h < 10)
            {
                if(m<10)
                {
                    cout << "0" << h << ":0" << m << " PM\n";
                }
                else
                {
                    cout << "0" << h << ":" << m << " PM\n";
                }
            }
            else
            {
                if(m<10)
                {
                    cout << h << ":0" << m << " PM\n";
                }
                else
                {
                    cout << h << ":" << m << " PM\n";
                }
            }
        }
        else
        {
            if(h == 0)
            {
                h = 12;
                if(m < 10)
                {
                    cout << h << ":0" << m << " AM\n";
                }
                else
                {
                    cout << h << ":" << m << " AM\n";
                }
            }
            else if(h < 10)
            {
                if(m < 10)
                {
                    cout << "0" << h << ":0" << m << " AM\n";
                }
                else
                {
                    cout << "0" << h << ":" << m << " AM\n";
                }
            }
            else
            {
                if(m < 10)
                {
                    cout << h << ":0" << m << " AM\n";
                }
                else
                {
                    cout << h << ":" << m << " AM\n";
                }
            }
        }

    }
    return 0;
}