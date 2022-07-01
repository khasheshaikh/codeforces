#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    int d;
    cin >> d;
    for (int i = 1; i <= d; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    int k;
    cin >> k;
    for (int j = 1; j <= k; j++)
    {
        int b;
        cin >> b;
        v2.push_back(b);
    }

    for (int z = 1; z <= n; z++)
    {
        if (v1[z - 1] == z || v2[z - 1] == z)
        {
            ans++;
        }
    }
    cout << ans;
    if (ans == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}