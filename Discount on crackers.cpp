#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

bool dfs(vector<char> adj[],char a,char b,vector<bool>&vis){
    queue<char> qt;
    qt.push(a);
    vis[a-'a'] = true;
    while(!qt.empty()){
        char a = qt.front();
        qt.pop();
        for(auto it:adj[a-'a']){
            if(it==b)
                return true;
            else if(!vis[it-'a']){
                vis[it-'a'] = true;
                qt.push(it);
            }
        }
    }
    return false;
}
void solve(){
    string s,t;
    cin>>s;
    cin>>t;
    int m;
    cin>>m;

    vector<char> adj[26];
    while(m--){
        string k;
        cin>>k;
        char a = k[0];
        char b = k[k.length()-1];
        adj[a-'a'].push_back(b);
    } 
    if(s.length()!=t.length()){
        cout<<"NO\n";
        return;
    }
    int ct = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]==t[i]){
            ct++;
            continue;
        }
        else{
            vector<bool> vis(26,false);
            if(dfs(adj,s[i],t[i],vis))
                ct++;
        }
    }
    if(ct==s.length()){
        cout<<"YES\n";

    }
    else
        cout<<"NO\n";
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
