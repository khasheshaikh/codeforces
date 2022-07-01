#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (true)
    {
        n += 1;
        int a, b, c, d;
        a = n % 10;
        b = (n / 10) % 10;
        c = (n / 100) % 10;
        d = (n / 1000) % 10;

        if (a != b && b != c && c != d && d != a && a!=c && b!=d)
        {
            break;
        }
    }

    cout << n;
}