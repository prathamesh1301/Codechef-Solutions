#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ct=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1])
            ct++;
    }
    int ans=-1;
    if(ct>=k){
        for(int i=n-1;i>=0;i--){
            if(k%2==0 && s[i]==s[0]){
                ans=i+1;
                break;
            }
            if(k%2!=0 && s[i]!=s[0]){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    else{
        cout<<ans<<endl;
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
