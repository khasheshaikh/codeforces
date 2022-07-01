#include <iostream>
using namespace std;

int main()
{

    int k, n, w;
    long long sum = 0;
    cin >> k >> n >> w;

    sum = w / 2 * (2 * k + (w - 1) * k);

    if (sum <= n)
    {
        cout << 0 << "\n";
    }
    else
        cout << sum - n << "\n";
}