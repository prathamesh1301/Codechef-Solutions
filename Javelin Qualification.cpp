#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 4
void  solve(){
    int n,m,x;
    cin>>n>>m>>x;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp.insert({a[i],i+1});
    }
    int ct=0;
    sort(a,a+n,greater<int>());
    vector<int> ans;
    int k;
    for(k=0;k<n;k++){
        if(a[k]>=m){
            ans.push_back(mp[a[k]]);
            ct++;
        }else
            break;
    }
    if(ct>=x){
        cout<<ct<<" ";
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }else{

        while(ct<x && k<n){
            ans.push_back(mp[a[k]]);
            ct++;
            k++;
         }
         cout<<ct<<" ";
         sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;

    }


}

int main()
{

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
