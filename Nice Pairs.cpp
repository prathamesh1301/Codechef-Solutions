#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= min(i + 9, n - 1); j++)
            {
                if (abs(s[j] - s[i]) == j - i)
                     ans++;
               }
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
