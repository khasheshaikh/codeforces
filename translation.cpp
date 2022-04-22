#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    if (a.compare(b) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}