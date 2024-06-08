#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();

    // 1) First we will find the break point, i.e. we will iterate from back of the array
    //    and observe where the integer is less than the current integer

    int ind = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    // 2) Then we will find a number which is greater than the break point value and swap it

    for (int i = n - 1; i >= ind; i--)
    {
        if (nums[i] > nums[ind])
        {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // 3) Then we will reverse the array from the break point to get the next permutation

    reverse(nums.begin() + ind + 1, nums.end());
    return;
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

    nextPermutation(v);

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}