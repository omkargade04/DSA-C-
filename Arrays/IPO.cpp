#include <bits/stdc++.h>
using namespace std;

int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
{
    int n = profits.size();

    vector<pair<int, int>> projects;

    for (int i = 0; i < n; i++)
    {
        projects.push_back({capital[i], profits[i]});
    }

    sort(projects.begin(), projects.end());

    priority_queue<int> maxHeap;
    int i = 0;

    for (int j = 0; j < k; j++)
    {
        while (i < n && projects[i].first <= w)
        {
            maxHeap.push(projects[i].second);
            i++;
        }
        if (maxHeap.empty())
        {
            break;
        }
        w += maxHeap.top();
        maxHeap.pop();
    }
    return w;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int w;
    cin >> w;

    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    int ans;

    ans = findMaximizedCapital(k, w, v1, v2);

    cout << ans << endl;

    return 0;
}