#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
   int n;
   cin>>n;
   ll a[n];
   int And = -1;
   for(int i=0;i<n;i++){
        cin>>a[i];
        And=And&a[i];
   }
   ll minn=0;
   for(int i=0;i<n;i++){
        minn=minn | (a[i]^And);
   }
   cout<<And<<" "<<minn<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
