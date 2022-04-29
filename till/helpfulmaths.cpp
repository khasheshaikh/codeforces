#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string n, k;
    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] != '+')
        {
            k.push_back(n[i]);
        }
    }
    sort(k.begin(), k.end());
    for (int i = 0; i < k.length(); i++)
    {
        cout << k[i];
        if (i < k.length() - 1)
        {
            cout << "+";
        }
    }
}