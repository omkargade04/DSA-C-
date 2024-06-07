#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&v,int n,int target){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(v[mid] == target) return mid;
        else if(v[mid] > target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(){
    int n;cin>>n;
    int target;cin>>target; 
    vector<int>v;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        v.push_back(e);
    }
    cout<<binarySearch(v,n,target);
}

//---------------------------------------------

//-----RECURSIVE------------------------------

// int binarySearch(vector<int>&v,int low,int high,int target){
//     int mid = (low + high)/2;
//     if(v[mid] == target) return mid;
//     else if(v[mid] > target) return binarySearch(v,mid+1,high,target);
//     else return binarySearch(v,low,mid-1,target);

// }
// int main(){
//     int n;cin>>n;
//     int target;cin>>target; 
//     int low = 0;
//     int high = n-1;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int e;cin>>e;
//         v.push_back(e);
//     }
//     cout<<binarySearch(v,low,high,target);
// }