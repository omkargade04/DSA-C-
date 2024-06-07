#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define double long double
#define f first
#define s second
#define pb push_back
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int i = n - m;
    vi a;
    a.pb(i);
    while (i != n)
    {
        i++;
        a.pb(i);
    }
    i = n - m;
    for (int j = i-1; j >= 1; j--)
    {
        a.pb(j);
    }

    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;

    return;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
