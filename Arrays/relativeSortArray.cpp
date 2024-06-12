#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[j] == arr2[i])
            {
                ans.push_back(arr1[j]);
                arr1[j] = -1;
            }
        }
    }

    sort(arr1.begin(), arr1.end());

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != -1)
        {
            ans.push_back(arr1[i]);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    vector<int> ans;

    ans = relativeSortArray(v1, v2);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}