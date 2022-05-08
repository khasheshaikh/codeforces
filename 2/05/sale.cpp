#include <iostream>
using namespace std;

int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < b; i++)
    {
        if (arr[i] < 0)
        {
            ans = ans + arr[i];
        }
    }

    cout << abs(ans);
}