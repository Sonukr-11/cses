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
int combination(int n)
{
    n *= n;
    return (n * (n - 1)) / 2;
}
int fun(int m)
{
    return max(0ll, 4 * m - 4);
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
        int n;
        cin >> n;
        int i, j;
        for (i = 1; i <= n; i++)
        {
            cout << (((i * i) * (i * i - 1)) / 2) - 4 * (i - 1) * (i - 2) << "\n";
        }
    }
}