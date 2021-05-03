#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<ctype.h>
#include<algorithm>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,w,wr;
        cin>>n>>w>>wr;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long total=0;
        long long ct=0,i=0,j=0;
        total=wr;
        while(i<n){
            j=i+1;
             ct=1;
            while(j<n){

                if(a[i]!=a[j])
                    break;
                ct++;
                j++;
            }
            //cout<<"ct "<<ct<<"\n";
            if(ct>1){
                total=total+ct*a[i];
                if(ct%2!=0){
                    total=total-a[i];
                }
                if(total>=w)
                    break;
            }
            i=j;
        }
        if(total>=w)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
