#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();

    if (n == 0)
        return 0;
    int longest = 1;
    int cnt = 0;
    int currSmallest = INT_MIN;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (nums[i] - 1 == currSmallest)
        {
            cnt++;
            currSmallest = nums[i];
        }
        else if (nums[i] != currSmallest)
        {
            cnt = 1;
            currSmallest = nums[i];
        }
        longest = max(longest, cnt);
    }

    return longest;
}

int longestConsecutive(vector<int> &nums){
    int n = nums.size();
    if(n == 0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }

    for(auto i: st){
        if(st.find(i - 1) == st.end()){
            int cnt =  1;
            int x = i;
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
}

//my solution

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    int s = 10e5;
    vector<int> freq(s, 0);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            nums[i] *= (-1);
        }
        freq[nums[i]]++;
    }

    int cnt = 0;
    int ans = INT_MIN;

    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] == 0)
        {
            ans = max(ans, cnt);
            cnt = 0;
            continue;
        }
        cnt++;
    }
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

    int ans = longestConsecutive(v);

    cout << ans << endl;

    return 0;
}