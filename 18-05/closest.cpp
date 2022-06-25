#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, ans = 1, count = 0;
        cin >> n;

        string k;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            if (k[i] != 'a' || k[i] != 'e' || k[i] != 'i' || k[i] != 'o' || k[i] != 'u')
            {

                v.push_back(abs((k[i]) - int('a')));
                v.push_back(abs((k[i]) - int('e')));
                v.push_back(abs((k[i]) - int('i')));
                v.push_back(abs((k[i]) - int('o')));
                v.push_back(abs((k[i]) - int('u')));
            }

            for (int i = 0; i < v.size(); i++)
            {

                if (v[i] > 0 && v[i] == v[i + 1])
                {
                    count++;
                }
            }
        }
        cout << pow(2, count)<<endl;
    }
}