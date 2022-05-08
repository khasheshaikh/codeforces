#include <iostream>
using namespace std;

int main()
{
    int n, ava = 0, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (ava == 0 && arr[i] < 0)
        {
            ans++;
        }
        else
        {
            ava = ava + arr[i];
        }
    }

    cout << ans;
}