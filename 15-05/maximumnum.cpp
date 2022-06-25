#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[1][j] = 1;
            arr[j][1] = 1;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }
    cout << arr[n][n];
}