#include<iostream> 
using namespace std;

int main()
{
    int n,k=0;
    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] =="++X" ||arr[i] == "X++" ) 
        {
            k++;
        }else if (arr[i] =="--X" ||arr[i] == "X--")
        {
            k--;
        }
        
        
    }
    cout << k;
    

}