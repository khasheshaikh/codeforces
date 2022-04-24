#include <iostream>
using namespace std;

int main()
{
    string s = "hello";
    string n;
    int k = 0, p = 0;
    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        if (s[k] == n[i])
        {
            k++;
            p++;
            if (p == 5)
            {
                break;
            }
        }
    }
    if (p == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}