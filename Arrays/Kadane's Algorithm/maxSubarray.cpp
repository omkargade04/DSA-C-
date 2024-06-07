#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int maxSum = nums[0];

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum >= maxSum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxSum;
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

    int ans = maxSubArray(v);

    cout << ans << endl;

    return 0;
}