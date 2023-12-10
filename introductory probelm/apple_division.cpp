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
        vector<int> vec(n);
        int total = 0;
        for (i = 0; i < n; i++)
        {
            cin >> vec[i];
            total += vec[i];
        }
        // cout << total << " ";
        int diff = 1e9;
        int subset_ct = 1 << n;
        for (int mask = 0; mask < subset_ct; mask++)
        {
            int sum1 = 0, sum2 = 0;
            for (j = 0; j < n; j++)
            {
                if ((mask & (1 << j)) != 0)
                {
                    sum1 += vec[j];
                }
            }
            sum2 = total - sum1;
            diff = min(diff, abs(sum1 - sum2));
        }
        cout << diff << "\n";
    }
}