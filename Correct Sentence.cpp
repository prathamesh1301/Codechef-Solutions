#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int N = 1e5+10;
//int arr[N];

int main(){

	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		int temp=k;
		int len=0;
		while(temp--){
			
			string s;
			cin>>s;
			int n=s.length();
			int fx=0;
			int f=0;

			if(n>1){
				int check=islower(s[0]);
				
				for(int i=1;i<n;i++){
					if(check==0 && islower(s[i])==0 && s[i]-'N'>=0 && s[i]-'N'<=12)
						continue;
					else if(check!=0 && islower(s[i])!=0 && s[i]-'a'>=0 && s[i]-'a'<=12)
						continue;
					else{
						f=1;
						break;
					}
				}
				if(f==1){
				
					continue;}
				else
					len++;	
			}
			else{
				
				if(s[0]-'N'>=0 && s[0]-'N'<=12)
					len++;
				else if(s[0]-'a'>=0 && s[0]-'a'<=12)
					len++;
				else{
					fx=1;
				}
				

			}
			
		}
		if(len==k)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
}
	
	return 0;
		
}
