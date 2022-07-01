#include <iostream>
using namespace std;

int main()
{
    string a, ans;

    cin >> a;
    char c1 = toupper(a[0]);
    for (int i = 1; i < a.length(); i++)
    {
        ans.push_back(a[i]);
    }

    cout << c1 << ans;
}