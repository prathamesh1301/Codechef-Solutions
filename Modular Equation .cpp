#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        
        long long ct=0;
        vector<long long> md(n+1,1);
        for(long long a=2;a<=n;a++){
            long long y=m%a;
            ct+=md[y];
            for(long long b=y;b<=n;b+=a){
                md[b]++;
            }
        }
        cout<<ct<<"\n";
    }
    return 0;
}
