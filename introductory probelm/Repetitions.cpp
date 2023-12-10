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
int fun(string &s, char ch)
{
    int rep = 0, n = s.size(), maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            rep++;
            maxi = max(maxi, rep);
        }
        else
        {
            maxi = max(maxi, rep);
            rep = 0;
        }
    }
    maxi = max(maxi, rep);
    return maxi;
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
    int te;
    te = 1;
    // cin >> t;
    while (te--)
    {
        int i, j;

        string s;
        cin >> s;
        int n = s.size();
        // A T G C
        int maxi = 0;
        int a = 0, t = 0, g = 0, c = 0;
        maxi = max(maxi, fun(s, 'A'));
        maxi = max(maxi, fun(s, 'G'));
        maxi = max(maxi, fun(s, 'T'));
        maxi = max(maxi, fun(s, 'C'));
        cout << maxi << "\n";
    }
}