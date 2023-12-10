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
    cin >> t;
    while (t--)
    {
        int i, j;

        int x, y;
        cin >> x >> y;
        if (x >= y)
        {
            if (x % 2 == 0)
            {
                cout << x * x - (y - 1);
            }
            else
            {
                cout << (x - 1) * (x - 1) + y;
            }
        }
        else
        {
            if (y % 2)
            {
                cout << y * y - (x - 1);
            }
            else
            {
                cout << (y - 1) * (y - 1) + x;
            }
        }
        cout << "\n";
    }
}