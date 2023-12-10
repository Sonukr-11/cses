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

void solve(int n, int src, int dest, int intermediate)
{
    if (n == 0)
    {
        return;
    }
    solve(n - 1, src, intermediate, dest);
    cout << src << " " << dest << "\n";
    solve(n - 1, intermediate, dest, src);
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
        int n, i;
        cin >> n;

        cout << (1 << n) - 1 << "\n";
        solve(n, 1, 3, 2);
    }
}