#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e5+10;
//int arr[N];

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,greater<int>());
		long long p1=0;
		long long p2=0;
		int k1=k;
		int k2=k;
		for(int i=0;i<n;i++){
			if(i%2==0 && i!=n-1 && k1>0){
				p1+=a[i];
				k1--;
			}
			else if((i%2!=0 || i==n-1 ) && k2>0){
				
				if(k2==1){
					
					p2+=a[i+1];	

				}
				p2+=a[i];
				k2--;
			}
		}
		cout<<max(p1,p2)<<endl;

}
	
	return 0;
		
}
