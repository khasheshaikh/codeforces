#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int dum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (dum < sum - dum)
        {
            dum = dum + arr[i];
            ans++;
        }
        else if (dum == sum - dum)
        {
            dum = dum + arr[i];
            ans++;
        }
    }

    cout << ans;
}