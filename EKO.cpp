#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e6+10;
const double eps=1e-6;

int n;
long long m;
long long a[N];

bool totalWood(long long h){
    long long sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>=h)
            sum+=a[i]-h;
    }
    return sum>=m;
}




int main(){

    cin>>n>>m;
  
    int maxx=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxx)
            maxx=a[i];
    }

    long long l=0,h=maxx;
    
    while(h-l>1){
        long long mid=(l+h)/2;
        if(totalWood(mid))
            l=mid;
        else
            h=mid-1;

    }
    if(totalWood(h))
        cout<<h<<endl;

    else
        cout<<l<<endl;

	return 0;
}
	
	
		
