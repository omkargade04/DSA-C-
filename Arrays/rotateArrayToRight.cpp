#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    if (k == 0)
    {
        return;
    }
    vector<int> temp;
    for (int i = n - k; i < n; i++)
    {
        temp.push_back(nums[i]);
    }
    vector<int> temppp = nums;
    for (int i = 0; i < n - k; i++)
    {
        nums[i + k] = temppp[i];
    }
    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }
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

    rotate(v, k);

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}