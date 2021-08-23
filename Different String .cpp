#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void  solve(){
    ll n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    string ans="";
    for(int i=0;i<n;i++){
        char x;
        if(a[i][i]=='1')
            x='0';
        else
            x='1';
        ans+=x;
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
