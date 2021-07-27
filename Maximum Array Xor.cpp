#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    ll power1=pow(2,n);
    ll half=power1/2;
    power1-=1;
    if(k>half)
        cout<<(2*(half)*power1)<<endl;
    else
        cout<<(2*(k)*power1)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
