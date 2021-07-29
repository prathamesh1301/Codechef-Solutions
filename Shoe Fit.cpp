#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c;
    vector<ll> ar;
    cin>>a>>b>>c;
    ar.push_back(a);
    ar.push_back(b);
    ar.push_back(c);
    ll l=0;
    ll r=0;
    for(auto i:ar){
        if(i==0)
            l++;
        else
            r++;
    }
    if(l>0 && r>0)
        cout<<1<<endl;
    else
        cout<<0<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
