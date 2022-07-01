#include <iostream>
using namespace std;

int main()
{
    int n, m = 1;
    cin >> n;
    int arr[13] = {4, 7, 44, 77, 47, 444, 777, 477, 744, 447, 774, 474, 747};

    for (int i = 0; i < 13; i++)
    {
        if (n % arr[i] == 0)
        {
            cout << "YES";
            m = 0;
            break;
        }
    }
    if (m)
    {
        cout << "NO";
    }
}