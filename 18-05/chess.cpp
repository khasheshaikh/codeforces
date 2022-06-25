#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int a,b,count=0;
        cin >> a >> b;
        while (b>a)
        {
            count++;
            a+=8;
        }
        cout << count<<endl;
    }
    
}