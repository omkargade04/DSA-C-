#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    nums.push_back(0);
    int maxx = 0;
    int cnt = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            cout << "Ones: " << cnt << endl;
            maxx = max(maxx, cnt);
            cnt = 0;
        }
    }

    return maxx;
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

    int ans = findMaxConsecutiveOnes(v);

    cout << ans << endl;

    return 0;
}