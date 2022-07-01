#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector< pair<int, int> > v;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second<<" ";
    }
}