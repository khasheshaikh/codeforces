#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int u = 0, l = 0;

    for (int i = 0; i < n.length(); i++)
    {
        if (isupper(n[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u > l)
    {
        for (int i = 0; i < n.length(); i++)
        {
            cout << (char)toupper(n[i]);
        }
    }
    else
    {
        for (int i = 0; i < n.length(); i++)
        {
            cout << (char)tolower(n[i]);
        }
    }
}