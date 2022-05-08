#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        if (n >= 2020)
        {
            if (n % 2020 == 0)
            {
                cout << "YES" << endl;
            }
            else if (n % 2021 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                int m = 1;
                while (n > 2021)
                {
                    n = n - 2021;

                    if (n % 2020 == 0)
                    {
                        cout << "YES" << endl;
                        m = 0;
                    }
                }

                if (m)
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}