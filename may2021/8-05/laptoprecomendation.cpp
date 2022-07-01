#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool sortbysecdesc(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int> > v;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int count = 1, ans;
        if (arr[i] == arr[i + 1])
        {
            count++;
        }

        v.push_back(make_pair(arr[i], count));
    }
    sort(v.begin(), v.end(), sortbysecdesc);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    if (v[0].second == v[1].second)
    {
        cout << "confused";
    }
    else
    {
        cout << v[0].first;
    }
}