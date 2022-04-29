#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, term;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                int temp = 0;
                term = pow(2, i) + temp;
                v.push_back(term);
            }
            else
            {
                term = pow(2, i) + v[i - 1];
                v.push_back(term);
            }
        }
        cout << v[(n / 2) - 1] * 2 << endl;
    }
}