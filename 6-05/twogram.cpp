#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < s.size(); i++)
    {
        char f1=s[i],f2=s[i+1];
        string ans = f1+f2;
        v.push_back(ans);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    
}