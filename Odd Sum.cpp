#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    if(n==2){
        cout<<1<<"\n";
        return;
    }
    if(n==3){
        cout<<3<<"\n";
        return;
    }
    n-=2;
    long long sum = 1;
    sum += (n+1)*n;
    cout<<sum<<"\n";

    
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
