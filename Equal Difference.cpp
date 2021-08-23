#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void  solve(){
    ll n;
    cin>>n;
    ll a[n];
    unordered_map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(n<=2){
        cout<<0<<"\n";
        return;
    }
    unordered_map<ll,ll>::iterator it;
    ll maxx=INT_MIN;
    for(it=mp.begin();it!=mp.end();it++){
        maxx=max(maxx,it->second);
    }
    if(maxx==1){
        cout<<n-2<<"\n";
        return;
    }
    ll ans=min(n-2,n-maxx);
    cout<<ans<<"\n";


}



int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();


return 0;
}
