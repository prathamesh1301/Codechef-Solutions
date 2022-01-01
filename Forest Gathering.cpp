#include <bits/stdc++.h>
using namespace std;
//long long h[100005],r[100005];
bool check(long long mid,long long m,long long l,long long n,long long h[],long long r[]){
      long long wood = 0;
      for(long long i=0; i<n; i++){
            if(mid >= ceil((long double)(l-h[i])/r[i])){
                  wood = wood + h[i];
            
            if(wood >= m)
                  return true;
            wood = wood + (mid*r[i]);
            if(wood >= m)
                  return true;
      }
      if(wood >= m)
            return true;
}

return false;
}

int main(){
      long long n,m,l;
      cin >> n >> m >> l;

      long long h[n],r[n];
      for(long long i=0; i<n; i++){
            cin >> h[i] >> r[i];
      }

      long long lo = 0, hi = 1e18 + 1,ans;
      while(hi-lo >= 0){
            long long mid = (lo + hi)/2;
            //cout << mid << ' ';
            if(check(mid,m,l,n,h,r)){
                  ans = mid;
                  hi = mid - 1;
            }else
            lo = mid + 1;
     }
      cout << ans;
      return 0;
}
