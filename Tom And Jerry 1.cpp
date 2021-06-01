#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e5+10;
//int arr[N];

int main(){

	int t;
	cin>>t;
	while(t--){
		int a,b,x,y,k;
		cin>>a>>b>>x>>y>>k;
		int dis=abs(x-a)+abs(y-b);
		if(dis%2==0 && k%2==0 && k>=dis)
			cout<<"YES"<<endl;
		else if(dis%2!=0 && k%2!=0 && k>=dis)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
}
	
	return 0;
		
}
