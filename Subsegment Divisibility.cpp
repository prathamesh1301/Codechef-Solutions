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
const int size = 501;
int val[size];
int pre[size];
void preCal(){
   //cout<<"nsd\n";
   val[0]=1;
   pre[1]=1;
   int cur=2;
   for(int i=1;i<500;i++){
      while(1){
         bool found = false;
         for(int j=i-1;j>=0;j--){
            if((cur+(pre[i]-pre[j]))%(i+1-j)==0){
               found = true;
               break;
            }
         }
         if(!found)break;
         else cur++;
      }
      pre[i+1]=pre[i]+cur;
      val[i]=cur;
      cur++;
   }
}
void solve(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
      cout<<val[i]<<" ";
   cout<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    //memset(dp,false,sizeof(dp));
    preCal();
    int t;
    cin>>t;

    while(t--)
        solve();
    return 0;


}
