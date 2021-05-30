#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e5+10;
//int arr[N];

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,k,f;
		cin>>n>>k>>f;
		int ans=0;
		vector<pair<int,int>> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i].first>>arr[i].second;
		}
		sort(arr.begin(), arr.end());

		int end=arr[0].second;
		for(int i=1;i<n;i++){
			ans+=max(0,arr[i].first-end);
			end=max(end,arr[i].second);
		}
		ans+=arr[0].first;
		ans+=f-end;
		if(ans>=k)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
}
	
	return 0;
		
}
