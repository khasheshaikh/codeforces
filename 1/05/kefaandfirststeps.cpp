
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, ma = 1, ans = 1;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (arr[i] >= arr[i - 1])
            {
                ans++;
                ma = max(ans, ma);
            }
            else
            {
                ans = 1;
            }
        }
    }

    cout << ma;
}