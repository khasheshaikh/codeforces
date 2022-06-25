#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b,div, ans = 0;
        cin >> a >> b;

        div = a/b;
        if (a%b!=0)
        {
            ans=b*(div+1)-a;
        }
        
        cout << ans<<endl;
    }
}