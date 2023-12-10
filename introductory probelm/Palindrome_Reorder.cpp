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

        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mp;
        for (i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        bool flag = true;
        int ct = 0;
        char ch1 = '#';
        for (auto it : mp)
        {
            // cout << it.first << " " << it.second <<  "\n";
            if (it.second % 2)
            {
                ch1 = it.first;
                ct++;
            }
        }

        if (ct > 1)
        {
            cout << "NO SOLUTION";
        }
        else
        {
            for (char ch = 'A'; ch <= 'Z'; ch++)
            {
                int p = mp[ch] / 2;
                // cout << p << " &";
                for (i = 0; i < (p); i++)
                {
                    cout << ch;
                }
            }
            if (ct == 1)
            {
                cout << ch1;
            }

            for (char ch = 'Z'; ch >= 'A'; ch--)
            {
                int p = mp[ch] / 2;
                for (i = 0; i < p; i++)
                {
                    cout << ch;
                }
            }
        }
    }
}