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

        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]=a[i]+k;
            }
        int ct=0;
        for(int i=0;i<n;i++){
            if(a[i]%7==0)
                ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}
