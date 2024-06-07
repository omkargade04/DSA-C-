#include<bits/stdc++.h>
using namespace std;

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = -1;
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                ans = mid;
                break;
            } 
            if(nums[low] <= nums[mid] ){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return ans;
    }
    int main(){
        int n;cin>>n;
        int target;cin>>target;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            nums.push_back(e);
        }
        cout<<search(nums,target);
    }