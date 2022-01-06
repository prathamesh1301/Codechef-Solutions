#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll d = (x+y);
    if(d%2==0)
        cout<<0<<"\n";
    else
        cout<<1<<"\n";

    

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
