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
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        vector<vector<int>> a;
        vector<int> p(2);
        for(int i=0;i<n;i++){
           cin>>p[0]>>p[1];
           a.push_back(p);
        }
        int pg=x-y;
        int f=0;
        if(pg<=0)
            cout<<"LuckyChef\n";
        else{
            for(int i=0;i<n;i++){
                int pl=a[i][0];
                int pr=a[i][1];
                if(pl>=pg){
                    if(pr<=k){
                        cout<<"LuckyChef\n";
                        f=1;

                    }
                }
                 if(f==1)
                    break;


            }
        }
        if(f==0)
            cout<<"UnluckyChef\n";
    }
    return 0;
}
