#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n;
    cin>>n;
    string s,p;
    cin>>s>>p;
    int ct=0;
    ct=count(p.begin(),p.end(),'1');
    if(ct==0 || ct==n){
        if(s==p){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"YES\n";
    }
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
