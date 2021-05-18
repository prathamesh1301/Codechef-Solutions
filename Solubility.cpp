#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int main(){
    int t;
    cin>>t;
    while(t--){
            int x,a,b;
            cin>>x>>a>>b;
            long long ans;
            ans=(a+(100-x)*b)*10;
            cout<<ans<<endl;
    }

    return 0;
}


