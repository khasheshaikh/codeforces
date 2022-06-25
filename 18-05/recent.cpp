#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, starter = 0, lunch = 0;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == "START38")
            {
                starter++;
            }
            else if (s == "LTIME108")
            {
                lunch++;
            }
        }
        cout << starter << " " << lunch<<endl;
    }
}