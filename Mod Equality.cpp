#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
   int n;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   int min_ele=*min_element(a,a+n);
   int ct=count(a,a+n,min_ele);
   bool all=false;
   for(int i=0;i<n;i++){
        if(a[i]==min_ele) continue;
        else if(a[i] <= 2ll * min_ele){
            all=true;
            break;
        }
   }
   if(all) cout<<n<<endl;
   else cout<<(n-ct)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
