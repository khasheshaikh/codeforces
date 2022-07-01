#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 33 && s[i] <= 126)
        {
            if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            {
                cout << "YES";
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "NO";
    }
}