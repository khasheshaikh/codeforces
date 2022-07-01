#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int a = 1;
        int suma = 0, sumb = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                suma++;
            }
            else if (s[i] == 'b')
            {
                sumb++;
            }
        }

        if (suma % 2 == 0)
        {
            if (sumb % 2 == 0)
            {
                cout << "YES1" << endl;
                a = 0;
            }
            else if (sumb % 3 == 0)
            {
                cout << "YES2" << endl;
                a = 0;
            }
            else
            {
                if ((sumb % 3) % 2 == 0)
                {
                    cout << "YES3" << endl;
                    a = 0;
                }
            }
        }
        else if (suma % 3 == 0)
        {
            if (sumb % 2 == 0)
            {
                cout << "YES4" << endl;
                a = 0;
            }
            else if (sumb % 3 == 0)
            {
                cout << "YES5" << endl;
                a = 0;
            }
            else
            {
                if ((sumb % 3) % 2 == 0)
                {
                    cout << "YES6" << endl;
                    a = 0;
                }
            }
        }
        else if ((sumb % 2) % 3 == 0)
        {
            if (sumb % 2 == 0)
            {
                cout << "YES7" << endl;
                a = 0;
            }
            else if (sumb % 3 == 0)
            {
                cout << "YES8" << endl;
                a = 0;
            }
            else
            {
                if ((sumb % 3) % 2 == 0)
                {
                    cout << "YES9" << endl;
                    a = 0;
                }
            }
        }
        if (a)
        {
            cout << "NO" << endl;
        }
    }
}