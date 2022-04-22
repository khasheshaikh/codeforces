#include <iostream>
using namespace std;

int main()
{

    int n, ans = 0;
    cin >> n;

    while (n >= 5)
    {
        n = n - 5;
        ans++;
    }
    while (n >= 4)
    {
        n = n - 4;
        ans++;
    }
    while (n >= 3)
    {
        n = n - 3;
        ans++;
    }
    while (n >= 2)
    {
        n = n - 2;
        ans++;
    }
    while (n >= 1)
    {
        n = n - 1;
        ans++;
    }
    cout << ans;
}