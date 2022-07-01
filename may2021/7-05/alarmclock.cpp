#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        unsigned long long a, b, c, d, sleep = 0, time = 0;
        cin >> a >> b >> c >> d;

        sleep = b, time = b;

        if (b < a && c < d)
        {

            cout << -1 << endl;
        }
        else
        {

            while (sleep < a)
            {

                sleep = sleep + (c - d);
                time = time + c;
            }
            cout << time << endl;
        }
    }
}