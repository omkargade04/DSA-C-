#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>&arr,int n,int k){
    int first = -1;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == k){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurance(vector<int>&arr,int n,int k){
    int last = -1;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == k){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return last;
}

vector<int> searchRange(vector<int>& nums,int n, int k) {
        int first = firstOccurance(nums,n,k);
        int last = lastOccurance(nums,n,k);

        if(first == -1){
            return {-1,-1};
        } 
        else{
            return {first,last};
        }
    }