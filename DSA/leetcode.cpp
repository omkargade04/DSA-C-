#include <bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string> &arr, int k)
{
    unordered_map<string, int> m;
    for (auto i : arr)
    {
        m[i]++;
    }
    string ans;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    for (auto i : m)
    {
        if (i.second == 1)
        {

            k--;
        }
        if (k == 0)
        {
            cout << i.first << endl;
            ans = i.first;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string ans = kthDistinct(v, k);
    cout << ans << endl;
    return 0;
}