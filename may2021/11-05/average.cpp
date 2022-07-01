#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[a];
    vector<int> v;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        v.push_back(arr[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        
        int ans;
        ans=arr[i]+arr[i+1]/2;

    }
    
}