#include <bits/stdc++.h>
using namespace std;

int subarraysDivByK(vector<int> &nums, int k)
{
    int n = nums.size();
    int cnt = 0;

    int i = 0;

    while (i < n)
    {
        int j = i + 1;
        int sum = 0;

        int temp = 0;

        if (nums[i] % k == 0 || (nums[i] < 0 && ((nums[i] * (-1)) % k == 0)))
        {
            cnt++;
        }

        while (j < n)
        {
            temp++;

            if (temp == 1)
            {
                sum += nums[i] + nums[j];
            }
            else
            {
                sum += nums[j];
            }

            if (sum % k == 0 || (sum < 0 && ((sum * (-1)) % k == 0)))
            {
                cnt++;
            }

            j++;
        }
        i++;
    }

    return cnt;
}

// Correct answer

int subarraysDivByK(vector<int> &nums, int k)
{

    int n = nums.size();

    unordered_map<int, int> m;
    m[0] = 1;

    int prefix_sum = 0;
    int cnt = 0;
    int i = 0;

    while (i < n)
    {
        prefix_sum += nums[i];
        int rem = prefix_sum % k;
        if (rem < 0)
        {
            rem += k;
        }
        if (m.find(rem) != m.end())
        {
            cnt += m[rem];
            m[rem]++;
        }
        else
        {
            m[rem] = 1;
        }
        i++;
    }

    return cnt;
}

int main()
{

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = subarraysDivByK(v, k);

    cout << ans << endl;

    return 0;
}