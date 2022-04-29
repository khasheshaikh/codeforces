#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' && s[i+3]=='W' && s[i+4]=='U' && s[i+5]=='B')
            {

                cout << "";
                i = i + 2;
            }
        else if (i==0 && (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'))
        {

            cout << "";
            i = i + 2;
        }
        else if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {

            cout << " ";
            i = i + 2;
        }
        else
        {
            cout << s[i];
        }
    }
}