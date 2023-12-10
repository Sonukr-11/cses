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
int fun(int curr, int i, int n, vector<vector<int>> &dp)
{
    if (n == curr)
    {
        return 1;
    }
    else if (curr > n || i > 6)
    {
        return 0;
    }
    if (dp[curr][i] != -1)
    {
        return dp[curr][i];
    }
    int take = 0, nottake = 0;
    if (i < 7)
        take = fun(curr + i, i, n, dp);
    nottake = fun(curr, i + 1, n, dp);

    return dp[curr][i] = (take + nottake) % mod;
}
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
        vector<vector<int>> dp(n + 1, vector<int>(7, -1));
        cout << fun(0, 1, n, dp);
    }
}