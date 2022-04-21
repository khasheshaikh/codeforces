#include <iostream>
using namespace std;

#define endl "\n"

int main()
{
    string s;
    int total = 0;
    cin >> s;
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            total++;
        }
    }
    if (total % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
