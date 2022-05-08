#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        unsigned long long n;
        int i = 3;
        int m = 1;
        cin >> n;
        while (i <= n)
        {

            if (n % i == 0)
            {

                cout << "YES" << endl;
                m = 0;
            }
            i = i + 2;
        }
        if (m)
        {
            cout << "NO" << endl;
        }
    }
}