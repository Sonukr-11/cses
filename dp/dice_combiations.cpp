#include <bits/stdc++.h>

using namespace std;
#define int long long
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using cd = complex<ld>;

const int mod = 1e9 + 7; // 998244353;
const int MAX = 1e6;

#define ps(x, y) fixed << setprecision(y) << x
// fflush(stdout) or cout << flush  for interactive problem  // 5 3 0 3

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    //     freopen("debug.txt", "w", stderr);
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // printf ("%s\n", __TIME__);
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        int i, j;

        int n;
        cin >> n;
        vector<int> dp(1e6 + 1);
        for (i = 1; i <= 6; i++)
        {
            dp[i] = 1;
        }
        for (i = 2; i <= n; i++)
        {
            int j = 1;
            while ((i - j) > 0 && j <= 6)
            {
                dp[i] += (dp[i - j]) % mod;
                dp[i] %= mod;
                j++;
            }
        }
        // for (i = 1; i <= 10; i++)
        //     cout << dp[i] << " ";
        cout << dp[n] << "\n";
    }
}