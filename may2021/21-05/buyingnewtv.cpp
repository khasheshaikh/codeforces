#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, area = 0, k = 1;
        cin >> a >> b;
        while (a--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            if (z <= b)
            {
                area = max(area, x * y);

                k = 0;
            }
        }
        if (k)
        {
            cout << "no tavblet" << endl;
        }
        else
        {
            cout << area << endl;
        }
    }
}