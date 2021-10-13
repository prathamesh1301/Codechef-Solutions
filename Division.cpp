#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void primeFactors(ll n,vector<ll>&factors)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            
            factors.push_back(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        factors.push_back(n);
}

void solve(){
    int n, a, b;
          cin >> n >> a >> b;

          int even = 0, odd = 0;
          while (n % 2 == 0)
          {
               n /= 2;
               even++;
          }

          for (int i = 3; i * i <= n; i++)
          {
               if (n % i == 0)
               {
                    while (n % i == 0)
                    {
                         n /= i;
                         odd++;
                    }
               }
          }

          if (n != 1)
               odd++;

          int ans = 0;

          if (a >= 0 && b >= 0)
          {
               ans = even * a + odd * b;
          }
          else if (a <= 0 && b <= 0)
          {
               if (even)
                    ans = a;
               else
                    ans = b;
          }
          else if (a >= 0 && b <= 0)
          {
               if (even)
                    ans = even * a;
               else
                    ans = b;
          }
          else if (a <= 0 && b >= 0)
          {
               if (even)
                    ans = a + odd * b;
               else
                    ans = odd * b;
          }

          cout << ans << endl;
     }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();



return 0;
}
