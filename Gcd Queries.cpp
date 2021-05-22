#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int p[n+1];
        int b[n+2];
        int ans=0;
        p[0]=0;

        for(int i=1;i<=n;i++){
            p[i]=__gcd(p[i-1],a[i]);
        }
        b[n]=a[n];
        b[n+1]=0;
        for(int i=n-1;i>=1;i--){
            b[i]=__gcd(b[i+1],a[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(p[l-1],b[r+1])<<endl;
        }
    }
	return 0;
}
