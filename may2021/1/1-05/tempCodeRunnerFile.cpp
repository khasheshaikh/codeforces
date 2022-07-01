#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, ans = 0, i = 0;
    cin >> n;
    int arr[n];
    vector<int> v;
    vector<int> f;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            v.push_back('>');
        }
        else if (arr[i] < arr[i + 1])
        {
            v.push_back('<');
        }
        else
            (arr[i] == arr[i + 1])
            {
                v.push_back('=');
            }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '=')
        {
            ans++;
        }
        else if (v[i] == '<')
        {
            ans++;
        }
        else if (v[i] == '>')
        {
            ans++;
            f.push_back(ans);
            ans = 0;
        }
    }

    cout << *max_element(f.begin(), f.end());
}