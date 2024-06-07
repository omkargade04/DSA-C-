#include<bits/stdc++.h>
using namespace std;

/*
Lower Bound means to return a smallest index such that the number at that index is greater than equal to the target
*/

int lowerBound(vector<int>&v,int n,int target){
    int ans = n;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        if(v[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n;cin>>n;
    int target;cin>>target;
    vector<int>v;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        v.push_back(e);
    }
    int answer = lowerBound(v,n,target);
    cout<<answer<<endl;

    return 0;
}

// --------------------------------------------------------------------


/*
Upper Bound means to return a smallest index such that the number at that index is greater than the target
*/

int upperBound(vector<int>&v,int n,int target){
    int ans = n;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        if(v[mid] > target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n;cin>>n;
    int target;cin>>target;
    vector<int>v;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        v.push_back(e);
    }
    int answer = upperBound(v,n,target);
    cout<<answer<<endl;

    return 0;
}