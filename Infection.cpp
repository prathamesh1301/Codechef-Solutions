#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e6+10;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		long long l=1,r=1e9,mid;

		int ans;
		sort(a,a+n);
		while(l<=r){
			mid=(r+l)/2;
			int cow=1;
			int prev=a[0];
			for(int i=1;i<n;i++){
				if(a[i]-prev>=mid){
					prev=a[i];
					cow++;
				}
				if(cow==c)
					break;
			}
			if(cow==c){
				ans=mid;
				l=mid+1;
			}
			else
				r=mid-1;
		}
		cout<<ans<<endl;
	}	

    
	return 0;
}
	
	
		
