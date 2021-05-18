#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long maxx=0;
        long long summ=0;
        for(int i=0;i<k;i++)
            summ+=a[i];
        maxx=summ;
        int j=k;
        int x=k;
        while(x<(n+k-1)){
            if(j-k<0)
                summ+=a[j]-a[n-k+j];
            else
                summ+=a[j]-a[j-k];
            //cout<<summ<<" "<<j<<endl;
            if(summ>maxx)
                maxx=summ;
            j=(j+1)%n;
            x++;
        }
        cout<<maxx<<endl;
    }

	return 0;
}
