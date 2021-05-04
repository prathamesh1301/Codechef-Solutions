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
        long long c;
        cin>>n>>c;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long ct=0;
        for(int i=0;i<n;i++){

                ct=ct+a[i];}
        if(c>=ct)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";

    }

    return 0;
}
