#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p;
    cin >> p;
    while(p--){
        int n;
        cin >> n;
        int m;
        for(int i = 1; i <= n; i++)
        {
            if(i%2 != 0)
            {
                m = 2;
                while(m--)
                {
                    for(int j = 1; j <= n; j++)
                    {
                        if(j%2 == 0)
                        {
                            cout << "..";
                        }
                        else
                        {
                            cout << "##";
                        }
                    }
                    cout << endl;
                }
            }

            else
            {
                m = 2;
                while(m--)
                {
                    for(int j = 1; j <= n; j++)
                    {
                        if(j%2 == 0)
                        {
                            cout << "##";
                        }
                        else
                        {
                            cout << "..";
                        }
                    }
                    cout << endl;
            }
            }
        }
    }
    return 0;
}