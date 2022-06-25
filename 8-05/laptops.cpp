#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n*2];
    
    vector<pair<int, int> > v;
    for (int i = 0; i < n*2; i++)
    {
        cin >> arr[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], arr[i+1]));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " "<< v[i].second;
    }

    
}
int max = *max_element(arr1, arr1 + n);
    int m = 1;

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i].first < v[i + 1].first && v[i].second > v[i + 1].second)
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