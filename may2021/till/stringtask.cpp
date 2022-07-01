#include<iostream>
#include<string>
using namespace std;

int main(){
    string c,s2;
    cin >> c;
    for (int i = 0; i < c.length(); i++)
    {
        if (c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='y' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U' || c[i]=='Y')
            continue;
        else
        {
            s2+='.';
            s2+=towlower(c[i]);
        }

        
    }
    cout<<s2;

    
}