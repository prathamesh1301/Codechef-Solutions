#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    
    int N; cin >> N;
        for(int x = 0; x < N; x++){
            cout << 100000-x << " ";
        }
        cout << endl;
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
