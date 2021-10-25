#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> zero,one;
    ll sum =0 ;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==0)
            zero.push_back(a[i]);
        else
            one.push_back(a[i]),sum+=a[i];
    }
    
    sort(one.begin(),one.end());
    sort(zero.begin(),zero.end(),greater<>());
    int z=0,o=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
            a[i]=zero[z++];
        else
            a[i]=one[o++];
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    ll ans=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
            ans += a[i]*sum;
        else
            sum-=a[i];
    }
    cout<<ans<<"\n";
    


    
}    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
