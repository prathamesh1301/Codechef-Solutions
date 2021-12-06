#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

void dfs(vector<int> adj[],int node,vector<bool>&vis,int& ct){
    vis[node] = true;
    ct++;
    for(auto it:adj[node]){
        if(!vis[it])
            dfs(adj,it,vis,ct);
    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
        vector<bool> vis(n+1,false);
        int cmp = 0;
        vector<int> comb;
        int ct;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                ct = 0 ;
                dfs(adj,i,vis,ct);
                comb.push_back(ct);
                cmp++;
            }
        }
        ll ans = 1;
        for(auto it: comb)
            ans = ((ans)%mod*it)%mod;
        cout<<cmp<<" "<<ans<<"\n";
    
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
