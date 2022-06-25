#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, ans = 0;
    cin >> n;
    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {

            ans = max(sum, sum - arr[i];
        }
        else
        {
            ans = max(sum, sum + arr[i];)
        }
    }
}