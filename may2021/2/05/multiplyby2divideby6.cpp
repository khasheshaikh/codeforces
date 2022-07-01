#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, ans = 0;
        cin >> n;
        while (n > 2)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
                ans++;
            }
            else
            {
                n = n * 2;
                ans++;
            }
        }
        if (n == 1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}