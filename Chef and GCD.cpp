#include <bits/stdc++.h>
using namespace std;
#define ll long long


int gcd(int a,int b){
    return __gcd(a,b);
}
void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans=0;
    if(a%2==0 && b%2==0)
        ans=0;
    else if(gcd(a,b)!=1)
        ans=0;
    else if(gcd(a+1,b)>1 || gcd(a,b+1)>1)
        ans=1;
    else
        ans=2;
    cout<<ans<<endl;




}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
