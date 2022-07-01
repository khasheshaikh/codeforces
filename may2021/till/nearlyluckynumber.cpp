#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            ans++;
        }
    }

    if (ans == 0)
    {
        cout << "NO";
    }
    else if (ans == 7 || ans == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}