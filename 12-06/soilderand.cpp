#include <iostream>
using namespace std;

int main()
{
    long    k, n, w,  ans = 0;
    long long total;
    cin >> k >> n >> w;
    total = ((w / 2.0) * ((2 * k) + ((w - 1) * k)));

    if (total > n)
    {
        cout << total - n;
    }
    else
    {
        cout << 0;
    }
}