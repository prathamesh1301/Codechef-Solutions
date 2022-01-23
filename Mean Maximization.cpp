#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld double
int M=1e9+7;

const int array_size = 1e6+100;
bool primes[array_size];


void sieve(){
  
   primes[0] = false;
   primes[1] = false;
   for(ll i = 2;i*i<=array_size;i++){
      if(primes[i]){
         for(ll j=i*i;j<=array_size;j+=i)
            primes[j] = false;
      }
   }
}


double max(double a,double b){
   if(a>b)return a;
   else
      return b;
}
void solve(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++)
      cin>>a[i];
   sort(a.begin(),a.end());
   vector<ll> pre(n);
   pre[0]=a[0];
   for(int i=1;i<n;i++)
      pre[i]=pre[i-1]+a[i];
   double mean_max = 0;
   for(int i=0;i<n-1;i++){
      double p = (1.0*pre[i])/(i+1);
      double q = (1.0*(pre[n-1]-pre[i]))/(n-i-1);
      double tmp = p+q;
      //cout<<tmp<<endl;
      mean_max=max(mean_max,tmp);

   }
   cout<<fixed << setprecision(6)<<mean_max<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    
    int t;
    cin>>t;

    while(t--)
        solve();
    return 0;


}
