#include<bits/stdc++.h>
using namespace std;

    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        if(n == 1) return 0;
        else{
            if(nums[0] > nums[1]) return 0;
            if(nums[n-1] > nums[n-2]) return n-1;
            
            int low = 1;
            int high = n-2;

            while(low <= high){
                int mid = (low + high)/2;
                if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){
                    index = mid;
                    break;
                }
                else if(nums[mid] > nums[mid-1] && nums[mid] < nums[mid+1]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            } 
        } 
        return index;
    }

    int main(){
        int n;cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            nums.push_back(e);
        }
        int ans = findPeakElement(nums);
        cout<<ans<<endl;

        return 0;
    }