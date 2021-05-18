#include <bits/stdc++.h>
using namespace std;


long long power(long long x, long long n)
{

    if (n == 0) {
        return 1;
    }

    long long pow = power(x, n / 2)%(1000000007);

    if (n & 1) {
        return (x * (pow%(1000000007)) * (pow%(1000000007)))%(1000000007);
    }

    // otherwise, `y` is even
    return ((pow%(1000000007)) * (pow%(1000000007)))%(1000000007);
}
long long countOdd(long long L, long long R){

    long long N = (R - L) / 2;

    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;

    return N;
}

int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            long long ans=power(2,n-1);
            cout<<ans<<"\n";
    }

    return 0;
}


