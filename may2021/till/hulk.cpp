#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I hate ";
            while (i < n - 1)
            {
                cout << "that ";
                break;
            }
        }
        else if (i % 2 != 0)
        {
            cout << "I love ";
            while (i < n - 1)
            {
                cout << "that ";
                break;
            }
        }
    }

    cout << "it";
}