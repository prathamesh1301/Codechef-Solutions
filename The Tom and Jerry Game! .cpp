#include <iostream>
using namespace std;
 
long long divide(long long a){
    while(a%2==0){
        a=a/2;
    }
    return a;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << divide(n)/2 << endl;
    }
    return 0;
}
 
