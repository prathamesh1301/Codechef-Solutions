#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void  solve(){
    ll a,b;
    cin >> a >> b;

    while(b%2==0){b /= 2;}
        if(b == 1){cout << "Yes";}
        else{cout << "No";}
        cout << "\n";
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
