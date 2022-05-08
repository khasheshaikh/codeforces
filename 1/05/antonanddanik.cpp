#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0, sumd = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            suma++;
        }
        else if (s[i] == 'D')
        {
            sumd++;
        }
    }
    if (suma > sumd)
    {
        cout << "Anton"
             << "\n";
    }
    else if (sumd > suma)
    {
        cout << "Danik"
             << "\n";
    }
    else
    {
        cout << "Friendship"
             << "\n";
    }
}