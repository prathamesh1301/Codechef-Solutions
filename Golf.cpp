#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,k;
        cin>>n>>x>>k;
        if(x%k==0 || (n+1)%k==x%k){
            cout<<"YES"<<endl;
            }
        else if(x==0 || x==n+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;}
    }
    return 0;
}
