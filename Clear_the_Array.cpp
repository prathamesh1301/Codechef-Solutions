#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void  solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());

    ll ans=0;
    while(k>0 && a.size()>1){
        int j=a.size();
        ll sum=a[j-1]+a[j-2];


        if(sum>=x){
            ans+=x;
            a.pop_back();
            a.pop_back();
        k--;
        }

        else
            break;



    }
    ans+=accumulate(a.begin(),a.end(),0ll);
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
