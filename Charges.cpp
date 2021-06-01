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
		string s;
		cin>>s;
		long long len=0;
		for(int i=0;i<n-1;i++){
			if(s[i]==s[i+1])
				len+=2;
			else
				len++;
		}
		while(k--){
			int q;
			cin>>q;
			q--;
			if(s[q]=='1')
				s[q]='0';
			else
				s[q]='1';
			if(q<n-1){
				if(s[q]==s[q+1])
					len+=1;
				else
					len--;
			}
			if(q>0){
				if(s[q]==s[q-1])
					len++;
				else
					len--;
			}
			cout<<len<<endl;
		}
		

}
	
	return 0;
		
}
