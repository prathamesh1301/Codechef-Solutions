#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e3+10;
//int a[1001][1001];

int min(int a,int b){
	if(a<b)
		return a;
	return b;
}
int main(){

	int t;
	cin>>t;
	while(t--){
		int x,m,d;
		cin>>x>>m>>d;
		int del=x*m;
		int maxDel=x+d;
		int ans=min(del,maxDel);
		cout<<ans<<endl;

	}
	
	return 0;
		
}
