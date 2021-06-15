#include <bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
const int n = 1e6+10;

int a[n]={0};
vector<int> ans(n,0);

void SieveOfEratosthenes()
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            a[p]=1;
    ans[0]=0;
    ans[1]=0;
    for(int i=2;i<=n;i++){
    if(a[i]==1 && a[i-2]==1)
        ans[i]=ans[i-1]+1;
    else
        ans[i]=ans[i-1];
        }
}



int main(){
    int t;
    cin>>t;
    SieveOfEratosthenes();



    while(t--){
        int pl;
        cin>>pl;
        cout<<ans[pl]<<endl;
    }
	return 0;
}



