#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        t[i] = arr[i];
    }
    sort(t.begin(),t.end());
    int ans = 0;
    multiset<int> a,b;
    for(int i=0;i<n;i++){
        a.insert(arr[i]);
        b.insert(t[i]);
        if(a==b){
            ans+=(*a.rbegin()-*a.begin());
            a.clear();
            b.clear();
        }
    }
    cout<<ans<<"\n";
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
