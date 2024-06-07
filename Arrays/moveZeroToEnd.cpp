#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    vector<int> temp;
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
        else
        {
            cnt++;
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }

    for (int i = n - cnt; i < n; i++)
    {
        nums[i] = 0;
    }
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

    moveZeroes(v);

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}