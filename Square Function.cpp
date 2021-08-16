#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 4

ll prime[1000001] = { 0 };

// Array k[] to store the value of k for
// each element in arr[]
ll k[1000001] = { 0 };

// For value of k, Sieve function is
// implemented
void Sieve()
{
    // Initialize k[i] to i
    for (ll i = 1; i < 1000001; i++)
        k[i] = i;

    // Prime Sieve
    for (ll i = 2; i < 1000001; i++) {

        // If i is prime then remove all
        // factors of prime from it
        if (prime[i] == 0)
            for (ll j = i; j < 1000001; j += i) {

                // Update that j is not
                // prime
                prime[j] = 1;

                // Remove all square divisors
                // i.e. if k[j] is divisible
                // by i*i then divide it by i*i
                while (k[j] % (i * i) == 0)
                    k[j] /= (i * i);
            }
    }
}

// Function that return total count
// of pairs with pefect square product
ll countPairs(ll arr[], ll n)
{
    // Map used to store the frequency of k
    unordered_map<ll, ll> freq;

    // Store the frequency of k
    for (ll i = 0; i < n; i++) {
        freq[k[arr[i]]]++;
    }

    ll sum = 0;

    // The total number of pairs is the
    // summation of (fi * (fi - 1))/2
    for (auto i : freq) {
        sum += ((i.second - 1) * i.second) / 2;
    }

    return sum;
}

void  solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll ct=countPairs(a,n);
    ll y=(n-1)*(n)/2;
    ll ans=y-ct;
    cout<<ans<<endl;
}

int main()
{
    Sieve();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}
