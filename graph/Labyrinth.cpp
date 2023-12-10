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

bool dfs(int i, int j, int n, int m, string &ans, bool &flag, string s[], vector<vector<bool>> &vis)
{
    vis[i][j] = true;
    if (s[i][j] == 'B')
    {
        flag |= true;
        return true;
    }
    // right
    if ((j + 1) < m && s[i][j + 1] != '#' && !vis[i][j + 1])
    {
        ans += 'R';
        if (dfs(i, j + 1, n, m, ans, flag, s, vis))
        {
            flag |= true;
            return true;
        }
        ans.pop_back();
    }
    // down
    if ((i + 1) < n && s[i + 1][j] != '#' && !vis[i + 1][j])
    {
        ans += 'D';
        if (dfs(i + 1, j, n, m, ans, flag, s, vis))
        {
            flag |= true;
            return true;
        }
        ans.pop_back();
    }

    // up

    if ((j - 1) >= 0 && s[i][j - 1] != '#' && !vis[i][j - 1])
    {
        ans += 'L';
        if (dfs(i, j - 1, n, m, ans, flag, s, vis))
        {
            flag |= true;
            return true;
        }
        ans.pop_back();
    }

    if ((i - 1) >= 0 && s[i - 1][j] != '#' && !vis[i - 1][j])
    {
        ans += 'U';
        if (dfs(i - 1, j, n, m, ans, flag, s, vis))
        {
            flag |= true;
            return true;
        }
        ans.pop_back();
    }

    return false;
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
        bool flag = false;
        string ans = "";
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (s[i][j] == 'A')
                {
                    dfs(i, j, n, m, ans, flag, s, vis);
                }
            }
        }
        if (flag)
        {
            cout << "YES\n";
            cout << ans.size() << "\n";
            cout << ans << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}