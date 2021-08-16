#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 4
void  solve(){
    int n=10;
    int a[n];
    int t1=0;
    int t2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==0 && a[i]==1){
            t1++;
        }
        else if(i%2!=0 && a[i]==1)
            t2++;
    }
    if(t1>t2)
        cout<<1<<endl;
    else if(t2>t1)
        cout<<2<<endl;
    else
        cout<<0<<endl;

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
