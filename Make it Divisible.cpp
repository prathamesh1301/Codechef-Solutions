#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    ll n;
    cin>>n;
    int rem[3] = {0};
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        rem[a%3]++;
    }
    int ans = 0;
    if((rem[1]*1 + rem[2]*2)%3){
        cout<<-1<<"\n";
        return;
    }
    else{
        int tmp = min(rem[1],rem[2]);
        ans += tmp;
        rem[1] -= tmp;
        rem[2] -= tmp;
        ans += 2*(rem[1]/3 + rem[2]/3);
        cout<<ans<<endl;
    }
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
