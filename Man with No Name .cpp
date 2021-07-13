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
    ll pre[n];
    if(a[0]!=-1)
        pre[0]=a[0];
    else
        pre[0]=0;
    ll sum=0;
    for(int i=1;i<n;i++){
        if(a[i]==-1){
        
            //cout<<pre[i-1]<<endl;
            int val=pre[i-1]/(i);
            a[i]=val;
          
            pre[i]=pre[i-1]+a[i];
            
        }
        else
            pre[i]=pre[i-1]+a[i];
    }
    ll bullets=pre[n-1]/n;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;


}

int main(){   
    int t;
    cin>>t;
    while(t--)
        solve();
    
    

    return 0;
}




	
	

	
	
		
