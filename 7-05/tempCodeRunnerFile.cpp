#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        int n, ans, a, count = 0;
        vector<int> v;
        cin >> n;
        while (n > 0)
        {
            n = n / 2;
            count++;
        }

        for (int a = count - 1; a > 1; a--)
        {
            int k = pow(2, a) - 1;
            cout << k << " ";
            if (n % k == 0)
            {

                ans = n / (pow(2, a) - 1);
            }
            else
            {
                continue;
            }
        }

        cout << ans << endl;
    }
}