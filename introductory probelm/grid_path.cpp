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

int dfs(int id, int r, int c, string &s)
{
    int i, j;
    int n = s.size();
    if (r == 7 && c == 1 && id == 48)
    {
        return 1;
    }
    else if (r < 1 || c < 1 || r > 7 || c > 7 || id >= 48)
    {
        return 0;
    }

    int ans = 0;

    if (s[id] == '?')
    {
        ans += dfs(id + 1, r + 1, c, s);
        ans += dfs(id + 1, r - 1, c, s);
        ans += dfs(id + 1, r, c + 1, s);
        ans += dfs(id + 1, r, c - 1, s);
    }
    else if (s[id] == 'U')
    {
        ans += dfs(id + 1, r - 1, c, s);
    }
    else if (s[id] == 'D')
    {
        ans += dfs(id + 1, r + 1, c, s);
    }
    else if (s[id] == 'L')
    {
        ans += dfs(id + 1, r, c - 1, s);
    }
    else
    {
        ans += dfs(id + 1, r, c + 1, s);
    }

    return ans;
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

        string s;
        cin >> s;
        int n = s.size();
        int r = 1, c = 1;
        // r = 7 c =1 ;
        cout << dfs(0, r, c, s);
    }
}