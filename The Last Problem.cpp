#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e3+10;
int a[1001][1001];

void pre(){
	for(int i=1;i<=1000;i++){
		a[i][1]=i*(i+1)/2;
		for(int j=2;j<=1000;j++){
			a[i][j]=a[i][j-1]+(j-1)+(i-1);
		}
	}
}
int main(){

	pre();
	int t;
	cin>>t;
	while(t--){
		int r1,c1,r2,c2;
		cin>>r1>>c1>>r2>>c2;
		long long summ=0;
		for(int i=r1;i<=r2;i++)
			summ+=a[i][c1];
		for(int j=c1+1;j<=c2;j++)
			summ+=a[r2][j];
		cout<<summ<<endl;


	}
	
	return 0;
}
