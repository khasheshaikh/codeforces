#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        int arr1[n], arr2[n], ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr1[i];
        }
        for (int j = 1; j <= n; j++)
        {
            cin >> arr2[j];
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {

                if (arr1[i] == arr2[j] && arr2[i] == arr1[j])
                {
                    ans++;
                }
            }
        }
        cout << ans<<endl;
    }
}