#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int a = 0, b = n - 1;
    while (a <= b)
    {
        int k = (a + b) / 2;
        if (arr[k] == x)
        {
            cout << k;
        }
        if (arr[k] > x)
        {
            b = k - 1;
        }
        else
        {
            a = k + 1;
        }
    }
}