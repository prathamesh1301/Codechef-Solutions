#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
       cin>>a[i];
       mp[a[i]]=0;
    }
    for(auto i:a)
        mp[i]++;
    int ans=0;
    unordered_map<int,int>::iterator it;

    for(it=mp.begin();it!=mp.end();it++){
        int val=it->first;
        int countt=it->second;
        if(countt>1){
            int comb=val-1;
            if(countt<=comb)
                ans+=countt;
            else
                ans+=comb;
        }else{
            ans+=1;
        }
    }
    cout<<ans<<endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
