#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, ans = 0;
    cin >> a;
    while (a--)
    {
        int n, x;
        cin >> n;
        x = n;

        while (x > 9)
        {
            x = x - 10;

            x++;
            ans++;
        }

        cout << n + ans << endl;
    }
}