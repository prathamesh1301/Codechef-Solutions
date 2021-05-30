#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e5+10;
int arr[N];

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[k];
		for(int i=0;i<N;i++)
			arr[i]=0;
		for(int i=0;i<k;i++){
			cin>>a[i];
			arr[a[i]]++;
		}
		int ct=0;
		vector<int> ans;
		for(int i=0;i<N;i++){
			if(arr[i]>1 && i<=n){
				ans.push_back(i);
			}
		}

		cout<<ans.size()<<" ";
		if(ans.size()>=1){
			for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
		}
		
		cout<<endl;


	}
	
	return 0;
		
}
