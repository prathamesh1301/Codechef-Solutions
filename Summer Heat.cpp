#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e7+2;



int main(){

	int t;
	cin>>t;
	while(t--){
		int x,y,X,Y;
		cin>>x>>y>>X>>Y;
		int xa=X/x;
		int xb=Y/y;
		cout<<xa+xb<<endl;
	}
	
	return 0;
		
}
