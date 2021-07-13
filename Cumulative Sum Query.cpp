#include <bits/stdc++.h>
using namespace std;
const long long m= 1e9+7;
const int N = 1e5+10;
#define ll long long



void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    ll q;
    cin>>q;
    ll pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
        pre[i]=pre[i-1]+a[i];
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll ans=pre[r]-pre[l]+a[l];
        cout<<ans<<endl;
    }
    
}

int main(){   
    
    solve();
    
    

    return 0;
}




	
	

	
	
		
