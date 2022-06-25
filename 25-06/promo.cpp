#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, q, sum = 0;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    while (q--)
    {
        int a, b;
        vector<int> v;
        cin >> a >> b;
        for (int i = 0; i < a; i++)
        {
            v.push_back(arr[i]);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < b; i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
        sum = 0;
    }
}