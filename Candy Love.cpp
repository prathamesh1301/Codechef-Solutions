
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int summ=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            summ+=a[i];
        }
        if(summ%2!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    

    return 0;
}
