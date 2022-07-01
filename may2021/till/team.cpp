#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin >> n;
    while (n--)
    {
    int f1,f2,f3;
    cin >> f1>>f2>>f3;
    
    if (f1==1 && f2==1 || f1==1 && f3==1 || f2==1 && f3==1)
    {
    count++;
        }

    }

    cout<<count;


return 0;
}