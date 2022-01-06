#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> b(32);
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            b[j]+=((a[i] & (1<<j))>0);
        }
    }
    int res = 0;
    for(int i=0;i<32;i++){
        if(b[i]>=2)
            res|=(1<<i);
    }
    cout<<res<<"\n";
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
