#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;
    while (a--)
    {
        int n, x, ans = 0;
        cin >> n;
        x = n;

        while (x > 9)
        {
            
            

            x++;
            ans++;
        }

        cout << n + ans << "\n";
    }
}