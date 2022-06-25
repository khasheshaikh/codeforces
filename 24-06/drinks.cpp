
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double arr[n];
    double sum = 0.0000000000;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << fixed << setprecision(12) << sum / n << endl;
}