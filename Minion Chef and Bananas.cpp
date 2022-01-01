#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;
bool check(ll n,ll h,vector<ll> a){
    ll sum = 0;
    for(int i=0;i<a.size();i++){
        sum+=(a[i]+n-1)/n;
    }
    return sum<=h;
}
void solve(){
    ll n,h;
    cin>>n>>h;
    vector<ll> a(n);
    ll sum = 0;
    ll high = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        high = max(high,a[i]);
    }
    //sort(a.begin(),a.end());
    ll low = 1;
    
    ll ans = -1;
    while(low<=high){
        ll mid = low+(high - low)/2;
        int res = check(mid,h,a);
        if(res==1){
            ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    cout<<ans<<endl;

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
