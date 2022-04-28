#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector< pair<int,int> > time;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        time.push_back({ in,1 });
    }
    for (int i = 0; i < n; i++)
    {
        int out;
        cin >> out;
        time.push_back({out,0});
    }
    sort(time.begin(),time.end());

    for (int i=0; i<n; i++)
    {
        
        cout << time[i].first << " "
             << time[i].second << endl;
  
    }
    
}