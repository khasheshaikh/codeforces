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
        int k = n / 2;
        while (n - 1 > k)
        {
            ans++;
            n--;
        }
        cout << ans << "\n";
    }
}