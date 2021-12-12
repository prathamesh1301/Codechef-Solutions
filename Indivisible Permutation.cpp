#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> ans(n);
    int k = 1;
    int j = 2;
    if(n%2==0){
        for(int i=1;i<=n;i++){
            if(i%2==0){
                ans[i-1] = k;
                k+=2;
            }
            else{
                ans[i-1] = j;
                j+=2;
            }
        }
    }
    else{
        k=1;
        j=2;
        ans[0] = n;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                ans[i-1] = k;
                k+=2;
            }
            else{
                ans[i-1] = j;
                j+=2;
            }
        }
        
    }
    
    for(auto it:ans)
        cout<<it<<" ";
    cout<<"\n";
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
