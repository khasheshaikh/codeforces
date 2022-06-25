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
        sum1 = 500 - (a * 2);
        sum2 = 1000 - ((a + b) * 4);

        cout << sum1 + sum2<<endl;
    }
}