#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        for (int i = n; i > 0; i--)
        {
            if (n % x == y)
            {
                cout << n;
                break;
            }
        }
    }
}