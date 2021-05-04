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
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long ct=0;
        for(int i=1;i<n;i++){
            ct=ct+(a[i]-a[0]);
        }
        cout<<ct<<endl;
    }
    return 0;
}
