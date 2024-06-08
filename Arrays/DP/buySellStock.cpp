

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int ans = 0;
    int mini = prices[0];
    int diff = 0;

    for (int i = 1; i < n; i++)
    {
        diff = prices[i] - mini;
        ans = max(ans, diff);
        mini = min(mini, prices[i]);
    }

    return ans;
}

int myMaxProfit(vector<int> &prices)
{
    int n = prices.size();

    vector<int> arr = prices;
    vector<int> temp;

    sort(arr.begin(), arr.end());

    int p1 = 0;
    int p2 = 0;
    int diff = 0;
    int maxDiff = INT_MIN;

    while (p1 < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (prices[i] == arr[p1])
            {
                p2 = i;
                break;
            }
        }

        for (int i = p2; i < n; i++)
        {
            if (prices[i] > arr[p1])
            {
                diff = prices[i] - arr[p1];
            }
            maxDiff = max(maxDiff, diff);
        }
        temp.push_back(maxDiff);
        p1++;
    }

    int ans = *max_element(temp.begin(), temp.end());

    return ans;
}

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = maxProfit(v);

    cout << ans << endl;

    return 0;
}