#include <iostream>
using namespace std;

int main()
{

    int z;
    cin >> z;
    while (z--)
    {
        int a, b, sum1, sum2;
        cin >> a >> b;
        sum1 = 1500 - (a * 2) - ((a + b) * 4);
        sum2 = 1500 - (b * 4) - ((a + b) * 2);

        if (sum1 > sum2)
        {
            cout << sum1<<endl;
        }
        else
        {
            cout << sum2<<endl;
        }
    }
}