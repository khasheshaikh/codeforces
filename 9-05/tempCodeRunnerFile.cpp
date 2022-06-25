#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, ans = 0, sum = 0;
    cin >> n;

    int arr[n];
    int count[4] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count[0]++;
        }
        else if (arr[i] == 2)
        {
            count[1]++;
        }
        else if (arr[i] == 3)
        {
            count[2]++;
        }
        else if (arr[i] == 4)
        {
            count[3]++;
        }
    }

    while (n > 0)
    {
        if (count[3] > 0)
        {

            ans++;
            count[3]--;
            n--;
        }
        else if (count[2] > 0 && count[0] > 0)
        {

            ans++;
            count[2]--;
            count[0]--;
            n = n - 2;
        }
        else if (count[1] > 1)
        {
            ans++;
            count[1] = count[1] - 2;
            n = n - 2;
        }

        else if (count[0] > 0 && count[1] > 0)
        {
            if ((count[0] * 1 + count[1] * 2) < 5)
            {
                ans++;
                count[0]--;
                count[1]--;
                n = n - 2;
            }
            else if (count[0] >= 4)
            {

                {
                    ans++;
                    count[0] = count[0] - 4;
                    n = n - 4;
                }
            }
        }
        else if (count[0] > 0)
        {
            ans++;
            count[0]--;
            n--;
        }
    }
    cout << ans;
}