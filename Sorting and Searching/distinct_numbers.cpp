#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int n;
    ;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        st.insert(vec[i]);
    }
    cout << st.size();
}