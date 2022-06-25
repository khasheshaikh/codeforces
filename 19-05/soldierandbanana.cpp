#include <iostream>
using namespace std;

int main()
{
     float k, n, w;
    cin >> k >> n >> w;
     float sum = (w / 2) * ((2 * k) + (w - 1) * k);

    if (n < sum)
    {
        cout << int(sum - n);
    }
    else
    {
        cout << 0;
    }
}