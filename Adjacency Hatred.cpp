#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n;
    cin>>n;
    int a[n];
    int o=0,e=0;
    vector<int> odd,even;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            e++;
            even.push_back(a[i]);
        }
        else{
            o++;
            odd.push_back(a[i]);
        }
    }

    if(o==0 && e>0){
        cout<<-1<<"\n";
        return;
    }
    else if(e==0 && o>0){
        cout<<-1<<"\n";
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2!=0)
                cout<<a[i]<<" ";
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }

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
