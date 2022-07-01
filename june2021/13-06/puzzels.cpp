#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);

    int first = arr[n - 1] - arr[0];
    sort(arr, arr + m, greater<int>());
    int second = arr[0] - arr[n - 1];
    if (first > second)
    {
        cout << second;
    }
    else
    {
        cout << first;
    }
}