#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a, b, c, ans1 = 0, ans2 = 0;

        cin >> a >> b >> c;
        if (a > b)
        {
            ans1 = a - b;
            ans2 = c - ans1;
        }
        else
        {
            ans1 = b - a;
            ans2 = c - ans1;
        }

        if (ans1 > ans2)
        {
            cout << ans2 << endl;
        }
        else
        {
            cout << ans1 << endl;
        }
    }
}