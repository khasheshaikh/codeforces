#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        long long a, b, c, d, time = 0, div = 0, sur = 0, ans = 0;
        cin >> a >> b >> c >> d;
        if (b >= a)
        {
            time = b;
        }
        else if (b < a && c < d)
        {
            time = -1;
        }
        else
        {
            time = a - b;
            div = c - d;
            sur = time % div;
            if (sur > 0)
            {
                time = time - sur;
                ans = time / div;
                ans++;
            }
            else
            {
                ans = time / div;
            }
            time = ans * c + b;
        }

        cout << time << endl;
    }
}