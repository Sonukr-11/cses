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
        vector<vector<int>> dp(n, vector<int>(n, 0));
        string grid[n];
        for (i = 0; i < n; i++)
        {
            cin >> grid[i];
        }
        // for (i = 0; i < n; i++)
        // {
        //     for (j = 0; j < n; j++)
        //     {
        //         cout << grid[i][j];
        //     }
        //     cout << "\n";
        // }
        i = 0;
        while (i < n && grid[0][i] == '.')
        {
            dp[0][i] = 1;
            i++;
        }
        i = 0;
        while (i < n && grid[i][0] == '.')
        {
            dp[i][0] = 1;
            i++;
        }

        for (i = 1; i < n; i++)
        {
            for (j = 1; j < n; j++)
            {
                if (grid[i][j] == '*')
                    dp[i][j] = 0;
                else
                {
                    dp[i][j] += dp[i - 1][j];
                    dp[i][j] += dp[i][j - 1];
                    dp[i][j] %= mod;
                }
            }
        }
        // for (i = 0; i < n; i++)
        // {
        //     for (j = 0; j < n; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        cout << dp[n - 1][n - 1] << "\n";
    }
}