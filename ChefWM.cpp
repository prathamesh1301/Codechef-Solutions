#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;
ll getPrimeFactors(ll n){
    ll ct = 0;
    for(ll i = 2;i*i<=n;i++){
        if(n%i==0){
            ct++;
            while(n%i==0)
                n/=i;
        }
    }
    if(n!=1)
        ct++;
    return ct;
}
void solve(){
    ll n,m;
    cin>>n>>m;
    ll primes = getPrimeFactors(m);
    ll ans = 0;
    for(ll i = primes;i>0;i--){
        if(n%i==0){
            ans = i;
            break;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;


}
