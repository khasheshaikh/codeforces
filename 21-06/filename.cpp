#include<iostream>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
        {
            ans++;
        }
        
    }
    cout << ans;
}