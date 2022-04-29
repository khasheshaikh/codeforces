#include <iostream>
using namespace std;

int main()
{
    string n;
    int ans = 0;
    cin >> n;

    for (int i = 0; i < n.length() - 1; i++)
    {

        if (n[i] == n[i + 1])
        {
            ans++;
            if (ans == 6)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            ans = 0;
        }
    }

    cout << "NO";
    return 0;
}