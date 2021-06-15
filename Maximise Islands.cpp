#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int n = 1e6+10;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        //*->1  .->0

        for(int i=0;i<n;i++){   //input array
            for(int j=0;j<m;j++){
                char x;
                cin>>x;
                if(x=='*')
                    a[i][j]=1;
                else
                    a[i][j]=0;
            }
        }

        if((n*m)%2==0){

            int t1[n][m];
            int t2[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    int sum=i+j;
                    if(sum%2==0){
                        t1[i][j]=1;
                        t2[i][j]=0;
                    }else{
                        t1[i][j]=0;
                        t2[i][j]=1;
                    }
                }
            }

            int ct1=0;
            int ct2=0;

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(a[i][j]!=t1[i][j])
                        ct1++;
                    if(a[i][j]!=t2[i][j])
                        ct2++;
                }
            }

            int ans=min(ct1,ct2);
            cout<<ans<<endl;



        }else{
            int t1[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    int sum=i+j;
                    if(sum%2==0){
                        t1[i][j]=1;
                    
                    }else{
                        t1[i][j]=0;
                    }
                }
            }
            int ct=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(a[i][j]!=t1[i][j])
                        ct++;
                  
                }
            }
            cout<<ct<<endl;


        }
        
    }
	return 0;
}
	
	
		
