#include <iostream>
#include <string>
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string A, B;
        cin >> A >> B;
 
        int count1 = 0;
        size_t pos = A.find(B);
        if (pos >= 0 && pos < A.length())
        {
            cout << 0 << endl;
            continue;
        }
 
        while (true)
        {
            A = A + A;
            pos = A.find(B);
 
            count1++;
            if (pos >= 0 && pos < A.length())
            {
                cout << count1 << endl;
                break;
            }
            else if (A.length() > 2 * B.length())
            {
                cout << "-1" << endl;
                break;
            }
        }
    }
 
    return 0;
}