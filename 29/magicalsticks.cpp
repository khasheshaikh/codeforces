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
        if (n % 2 != 0)
        {
            ans = (n + 1) / 2;
        }
        else
        {
            ans = n / 2;
        }

        cout << ans << endl;
    }
}