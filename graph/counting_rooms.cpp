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

void dfs(int i, int j, int n, int m, string s[], vector<vector<bool>> &vis)
{
    vis[i][j] = true;
    // left

    if ((j - 1) >= 0 && s[i][j - 1] == '.' && !vis[i][j - 1])
    {
        dfs(i, j - 1, n, m, s, vis);
    }

    // right
    if ((j + 1) < m && s[i][j + 1] == '.' && !vis[i][j + 1])
    {
        dfs(i, j + 1, n, m, s, vis);
    }

    // up

    if ((i - 1) >= 0 && s[i - 1][j] == '.' && !vis[i - 1][j])
    {
        dfs(i - 1, j, n, m, s, vis);
    }

    // down
    if ((i + 1) < n && s[i + 1][j] == '.' && !vis[i + 1][j])
    {
        dfs(i + 1, j, n, m, s, vis);
    }

    return;
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

        int n, m;
        cin >> n >> m;
        string s[n];
        for (i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int ans = 0;
        // for (i = 0; i < n; i++)
        // {
        //     for (j = 0; j < m; j++)
        //     {
        //         cout << s[i][j];
        //     }
        //     cout << "\n";
        // }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (!vis[i][j] && s[i][j] == '.')
                {
                    ans++;
                    dfs(i, j, n, m, s, vis);
                }
            }
        }
        string str = "sdf";
        str += 'c';
        str += 'g';
        cout << str;
        cout << ans << "\n";
    }
}