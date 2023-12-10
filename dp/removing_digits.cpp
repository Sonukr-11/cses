#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        int i, j;

        int n;
        cin >> n;
        vector<int> dp(n + 1, 1e6);
        dp[0] = 0;

        for (i = 1; i <= n; i++)
        {
            int temp = i;
            while (temp > 0)
            {
                int a = temp % 10;
                dp[i] = min(dp[i], 1 + dp[i - a]);
                temp /= 10;
            }
        }
        cout << dp[n] << "\n";
    }
}