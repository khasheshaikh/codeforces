#include <iostream>
using namespace std;

int ans(int n)
{
    if (n == 1)
        return 1;
    int partial = ans(n - 1);
    return 4 * (n - 1) + partial;
}

int main()
{
    int n;
    cin >> n;
    cout << ans(n);
}