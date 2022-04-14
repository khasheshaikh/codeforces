#include<iostream>

#include<algorithm>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    int ans,x,y,z;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    x=(k*l)/nl;
    y=c*d;
    z=p/np;
    
    ans = min(min(x,y),z);
    cout << ans/3;
}