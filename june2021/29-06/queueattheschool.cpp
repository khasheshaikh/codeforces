#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (s[j] == 'B' && s[j + 1] == 'G')
            {

                swap(s[j], s[j + 1]);
                j = j + 1;
            }
        }
    }
    cout<<s;
}