#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n-1];
    int arr2[n-1];
    for (int i = 0; i < n*2; i = i + 2)
    {
        cin >> arr1[i];
    }
    for (int i = 1; i < n*2; i = i + 2)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
        cout<<endl;
    }
    for (int i = 1; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}