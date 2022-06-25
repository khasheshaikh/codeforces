#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        int sum1 = abs(s1[i] - s2[i]);
        int sum2 = 10 - sum1;

        if (sum1 < sum2)
        {
            ans = ans + sum1;
        }
        else
        {
            ans = ans + sum2;
        }
    }
    cout<<ans;
}
