#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        int num = 109, count = 0;

        if (a[i] <= 109)
        {
            while (a[i] <= num)
            {
                count++;
                a[i]++;
            }

            cout << char(char(a[i]) + count - 1);
        }
        else
        {
            while (a[i] > num)
            {
                count++;
                a[i]--;
            }

            cout << char(char(a[i]) - count + 1);
        }
    }
}