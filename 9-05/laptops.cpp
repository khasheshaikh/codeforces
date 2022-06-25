#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int size = n * 2;
    int arr[size];

    vector<pair<int, int> > v;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i = i + 2)
    {
        v.push_back(make_pair(arr[i], arr[i + 1]));
    }

    sort(v.begin(), v.end());

    int m = 1;

    for (int i = 0; i < v.size(); i++)
    {

        if ((v[i].first < v[i + 1].first) && (v[i].second > v[i + 1].second))
        {

            cout << "Happy Alex" << endl;
            m = 0;
            break;
        }
    }
    if (m)
    {
        cout << "Poor Alex";
    }
}