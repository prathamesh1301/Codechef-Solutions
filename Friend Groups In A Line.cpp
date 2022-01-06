#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ans = 0;
    ll last = -(1e6);
    for(ll i=0;i<n;i++){
        if(s[i]=='0')continue;
        if(i-last<=k+1)
            last = min(last+k,i+1);
        else{
            ans++;
            last = i+1;
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
