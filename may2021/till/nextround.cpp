#include <iostream>
using namespace std;


int main()
{
    int a, b, count=0;
    cin >> a >> b;

        int arr[10000];
        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
        }
        for (int j = 1; j <= a; j++)
        {
            if (arr[j]>=arr[b] && arr[j]>0)
            {
                count++;
            }
               
        }
        
        cout << count;
        
    
    
        
}