#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr , int low , int mid , int high){
    vector<int>temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
        
    for(int i=low;i<=high;i++){
        arr[i] = temp[i - low];
    }

}
void mS(vector<int>&arr , int low , int high){
    if(low == high) return;
    int mid = (low + high)/2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low , mid , high);
}

int main(){
    vector<int>arr;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        arr.push_back(e);
    }
    mS(arr,0,n-1);
}

/*

THIS SORTING TECHNIQUE IS CALLED MERGE SORTING
Its Gist is "DIVIDE AND MERGE".

In this Sorting Algorithm,first we divide the array into two parts 
by low, mid and high
The mS() function divides the array recursively until low != high
and after the base case is satisfied, the merge() is called.
In the merge(), a temporary array named temp is defined, which stores the sorted array.
The array is sorted by comparing the two divided arrays by using pointers.
And the smaller among the two is added in temp
And array is switched with temp.

*/ 