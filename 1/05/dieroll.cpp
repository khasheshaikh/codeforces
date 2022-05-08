#include <iostream>
using namespace std;

int main()
{
    int a, b, z, count = 0, total = 6;
    cin >> a >> b;
    if (a > b)
    {
        z = a;
    }
    else
    {
        z = b;
    }
    for (int i = z; i <= 6; i++)
    {
        count++;
    }

    while (count % 2 == 0 && total % 2 == 0)
    {
        count = count / 2;
        total = total / 2;
    }

    while (count % 3 == 0 && total % 3 == 0)
    {
        count = count / 3;
        total = total / 3;
    }
    cout << count;
    cout << "/";
    cout << total;
}