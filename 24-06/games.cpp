#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,ans=0;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n * 2; i++)
    {
        int x;
        cin >> x;
        if (i % 2 == 0)
        {
            v1.push_back(x);
        }
        else
        {
            v2.push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v1[i] == v2[j])
            {
                ans++;
            }
        }
    }
    cout << ans;
}