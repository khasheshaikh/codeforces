#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int a;
    cin >> a;
    int arr1[a];
    for (int i = 1; i <= a; i++)
    {
        cin >> arr1[i];
    }
    int b;
    cin >> b;
    int arr2[b];
    for (int j = 1; j <= b; j++)
    {
        cin >> arr2[j];
    }
    int arr[a + b];
    for (int z = 1; z <= a + b; z++)
    {
        if (z <= a)
        {
            arr[z] = arr1[z];
        }
        else
        {
            arr[z] = arr2[z - a];
        }
    }
    for (int i = 1; i <= a + b; i++)
    {
        int chek = 1;
        if (arr[i] == chek)
        {
            chek++;
            ans++;
        }
    }
    cout << ans;
    
    
}