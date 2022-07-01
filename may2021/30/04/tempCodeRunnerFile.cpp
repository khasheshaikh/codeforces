#include <iostream>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;
    int arr[] = {4, 7, 44, 77, 47, 444, 777, 477, 744, 447, 774};

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (n % arr[i] == 0)
        {
            cout << "YES";
            m = 1 break;
        }
    }
    if (m)
    {
        cout << "NO";
    }
}