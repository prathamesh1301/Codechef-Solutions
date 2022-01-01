#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;
set<ll> st;
void pre(){
    for(ll i =0;i<=30;i++){
        for(ll j =0;j<=30;j++){
            if(i==j)continue;
            ll tmp = (1ll<<i)+(1ll<<j);
            st.insert(tmp);
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> a;
    for(auto it=st.begin();it!=st.end();it++){
        a.push_back(*it);
    }
    auto next = lower_bound(a.begin(),a.end(),n);
    auto prev = upper_bound(a.begin(),a.end(),n);
    prev--;
    ll ans =  min(abs(n- *next),abs(n- *prev));
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    pre();
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;


}
