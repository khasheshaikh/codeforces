#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        int n, ans, a, count = 0;
        int z = n;

        cin >> n;
        while (n > 0)
        {
            n = n / 2;
            count++;
        }

        for (int a = count - 1; a > 1; a--)
        {
            int k = pow(2, a) - 1;

            if (n % k == 0)
            {

                ans = z / pow(2, a) - 1;
            }
        }

        cout << ans << endl;
    }
}