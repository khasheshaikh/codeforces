#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, x;
    cin >> n >> x;
    double ans = (x * 100) / (100 - n);
    cout << fixed << setprecision(2) << ans;
}