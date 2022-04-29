#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, ans;
    cin >> a >> b;

    double i, j;
    i = a / 2;
    j = b / 1;
    if (a % 2 != 0)
    {
        ans = floor(i) * floor(j) + b / 2;
    }
    else
    {
        ans = floor(i) * floor(j);
    }
    cout << ans;
}