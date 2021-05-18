#include <bits/stdc++.h>
using namespace std;
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        double maxx=0.0;
        int i=min(a,b);
        //cout<<i<<endl;
        while(i<=max(a,b)){

            int k=i;
            double summ=0;
            for(int j=0;j<k;j++)
                summ+=arr[j];
            //cout<<summ<<endl;
            double temp=summ/k;
            if(temp>maxx)
                maxx=temp;
            for(int j=k;j<n;j++){
                summ+=arr[j]-arr[j-k];
                temp=summ/k;
                if(temp>maxx)
                    maxx=temp;
            }

           i++;
        }
        cout << fixed << setprecision(7)<<maxx<<endl;

    }

	return 0;
}
