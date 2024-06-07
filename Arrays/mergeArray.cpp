#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr1[] = {1,2,3,4};
    int arr2[] = {5,7,9,11,20};
    int m = 4;
    int n = 5;
    int ansArray[m + n];

    //  Scan three pointers i,j,k
    // i will iterate arr1
    //j will iterate arr2
    //k will iterate ansArray
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            ansArray[k++] = arr1[i++];
        }
        else{
            ansArray[k++] = arr2[j++];
        }
    }
    while (i < m){
        //if arr2 is exhausted and we are still left with elements in arr1
        ansArray[k++] = arr1[i++];
    }
    while (j < n){
        //if arr1 is exhausted and we are still left with elements in arr2
        ansArray[k++] = arr2[j++];
    }

    for(int i = 0 ; i < m + n ; i ++){
        cout<<ansArray[i]<<" ";
    }

    return 0;
}

/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ansArray(m+n);
        int i = 0;//i is used to iterate nums1
        int j = 0;//j is used to iterate nums2
        int k = 0;//k is used to itrate ansArray
        
 while(i<m && j<n){
            if (nums1[i] < nums2[j]){
                ansArray[k++] = nums1[i++];
            }
            else if(nums1[i] == nums2[j]){

                ansArray[k++] = nums1[i++];
                ansArray[k++] = nums2[j++];
                
            }
            else{
                ansArray[k++] = nums2[j++];
            }
        }
        //if nums2 has exhausted then 
        while(i<m){
            ansArray[k++] = nums1[i++];
        }
        //if nums1 has exhausted then
        while(j<n){
            ansArray[k++] = nums2[j++];
        }
   // int h=0;
    for(int z = 0 ; z < m+n ; z++){
        nums1[z]=ansArray[z];
    }cout<<endl;
    }
    
    // return ansArray;
};
*/