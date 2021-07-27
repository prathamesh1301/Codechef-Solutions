#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ct=0;
    while(n>0){
        n=floor(n/k);
        ct++;
    }
    cout<<ct<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
