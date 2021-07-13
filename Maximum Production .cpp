#include <bits/stdc++.h>
using namespace std;
const long long m= 1e9+7;
const int N = 1e5+10;
#define ll long long

void solve(){
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    int w1=7*x;
    int w2=y*d + (7-d)*z;
    cout<<max(w1,w2)<<endl;
}

int main(){   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    

    return 0;
}




	
	

	
	
		
