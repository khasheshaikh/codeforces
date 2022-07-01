#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0, ans;
    cin >> n;
    int arr[n * 2];
    vector<int> v;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - arr[i];
            v.push_back(sum);
        }
        else
        {
            sum = sum + arr[i];
            v.push_back(sum);
        }
    }

    cout << *max_element(v.begin(), v.end());
}