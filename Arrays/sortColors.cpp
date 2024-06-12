#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    
    int n = nums.size();

    map<int, int> m;

    for(auto i : nums){
        m[i]++;
    }

    nums.clear();

    for(auto i : m){
        for(int j=0;j<i.second;j++){
            nums.push_back(i.first);
        }
    }

    return;
}

// void sortColors(vector<int> &nums)
// {
//     int n = nums.size();

//     int zero = 0;
//     int one = 0;
//     int two = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == 0)
//             zero++;
//         else if (nums[i] == 1)
//             one++;
//         else
//             two++;
//     }

//     nums.clear();

//     while (zero)
//     {
//         nums.push_back(0);
//         zero--;
//     }
//     while (one)
//     {
//         nums.push_back(1);
//         one--;
//     }
//     while (two)
//     {
//         nums.push_back(2);
//         two--;
//     }

//     return;
// }

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    sortColors(v1);

    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
}