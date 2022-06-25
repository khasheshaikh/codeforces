#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < 3 * n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n * 3; i = i + 3)
    {
        sum1 = sum1 + v[i];
    }
    for (int i = 1; i < n * 3; i = i + 3)
    {
        sum2 = sum2 + v[i];
    }
    for (int i = 2; i < n * 3; i = i + 3)
    {
        sum3 = sum3 + v[i];
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}