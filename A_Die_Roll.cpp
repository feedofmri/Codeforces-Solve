#include <iostream>
 
using namespace std;
 
int main()
{
    int y, w;
    cin >> y >> w;
    int m = y > w ? y : w;
    int p = 6 - m + 1;
    if (p == 6)
    {
        cout << "1/1" << endl;
    }
    else if (p == 5)
    {
        cout << "5/6" << endl;
    }
    else if (p == 4)
    {
        cout << "2/3" << endl;
    }
    else if (p == 3)
    {
        cout << "1/2" << endl;
    }
    else if (p == 2)
    {
        cout << "1/3" << endl;
    }
    else
    {
        cout << "1/6" << endl;
    }
    return 0;
}
