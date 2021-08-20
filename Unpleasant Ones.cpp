#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void  solve(){
    ll n;
    cin>>n;
    ll a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)
            a[i]=-1*a[i];

    }
    sort(a,a+n);
    for(auto i:a){
        cout<<abs(i)<<" ";
    }
    cout<<endl;


}

int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();


return 0;
}
